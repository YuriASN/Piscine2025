/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysantos- <ysantos-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 22:58:26 by ysantos-          #+#    #+#             */
/*   Updated: 2025/08/11 18:11:03 by ysantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

/** @brief
 * Returns the lenght of a string
 * @param str
 * String to count chars up to \0 */
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

/**	@brief
 * Concatenates source on destination up to n bytes.
 * @param dest
 * String to be added to
 * @param src
 * String to add from 
 * @param nb
 * Number of bytes to copy*/
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	size;

	size = ft_strlen(dest);
	i = -1;
	while (++i < nb && src[i])
		dest[size + i] = src[i];
	dest[size + i] = '\0';
	return (dest);
}

/*int main() {
	char	dest[100] = "This will stay ";
	char	*src = "*this will get in x amount of bytes.";

	printf("New str = %s\n", ft_strncat(dest, src, 9));

	return (0);
}*/
