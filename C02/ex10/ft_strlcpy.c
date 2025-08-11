/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysantos- <ysantos-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 18:27:20 by ysantos-          #+#    #+#             */
/*   Updated: 2025/08/11 18:27:51 by ysantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c])
		c++;
	return (c);
}

/** @brief
 * Copy source to destination until end of source
 * or size - 1, saving space for NULL terminate it
 * @param dest
 * String to copy to
 * @param src
 * String to copy from
 * @param size
 * Full size of dest */
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;
	int	c;

	c = 0;
	i = -1;
	while (++i < (int)size - 1 && src[i])
	{
		dest[i] = src[i];
		c++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

/*int main()	{
	char src[100] = "This go in";
	char dest[100] = "This go out, or stay if is bigger";
//	strlcpy(dest, src, strlen(dest));
	ft_strlcpy(dest, src, strlen(dest));
	printf("%s\n", dest);
//	write(1, &dest[13], 1);

	return (0);
}*/
