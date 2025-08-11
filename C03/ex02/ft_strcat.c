/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysantos- <ysantos-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 22:33:55 by ysantos-          #+#    #+#             */
/*   Updated: 2025/08/11 18:08:17 by ysantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

/**	@brief
 * Concatenates source on destination.
 * @param dest
 * String to be added to
 * @param src
 * String to add from */
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = -1;
	j = -1;
	while (dest[++i])
		continue ;
	while (src[++j])
		dest[i + j] = src[j];
	dest[i + j] = src[j];
	return (dest);
}

/*int main() 	{
	char dest[100] = "This stays ";
	char *src = ",this gets in";

	ft_strcat(dest, src);
	printf("dest = %s\n", dest);
	return (0);
}*/
