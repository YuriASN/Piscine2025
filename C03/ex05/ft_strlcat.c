/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysantos- <ysantos-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 14:12:09 by ysantos-          #+#    #+#             */
/*   Updated: 2025/08/11 18:10:38 by ysantos-         ###   ########.fr       */
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
	int	c;

	c = 0;
	while (str[c])
		c++;
	return (c);
}

/**	@brief
 * Concatenates source on destination up to size -1
 * saving 1 for the NULL character.
 * @param dest
 * String to be added to
 * @param src
 * String to add from
 * @param size
 * Full size of dest */
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	d_len;

	i = 0;
	d_len = ft_strlen(dest);
	while (src[i] && i + d_len < size - 1)
	{
		dest[d_len + i] = src[i];
		++i;
	}
	if (d_len + i < size)
	{
		dest[d_len + i] = '\0';
		return (d_len + ft_strlen(src));
	}
	return (size);
}

/*int main() {
	char	dest[35] = "This will stay ";
	char	*src = "*this will get in up to sizeof dest -1 or end of source.";

	unsigned int res = ft_strlcat(dest, src, sizeof(dest));
	printf("New str tried to appended %u bytes = %s\n", res, dest);

	return (0);
}*/
