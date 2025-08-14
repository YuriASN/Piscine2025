/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysantos- <ysantos-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 17:21:41 by ysantos-          #+#    #+#             */
/*   Updated: 2025/08/11 18:29:27 by ysantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

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

/** @brief
 * Copy source to destination until end of source
 * @param dest
 * String to copy to
 * @param src
 * String to copy from
 */
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = -1;
	while (src[++i])
		dest[i] = src[i];
	dest[i] = src[i];
	return (dest);
}

/** @brief
 * Returns a copy of the string with memory allocation.
 * @param src
 * String to be copied from */
char	*ft_strdup(char *src)
{
	char	*str;

	str = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_strcpy(str, src);
	return (str);
}

/* int main()	{
	char *new;

	new = ft_strdup("this string to it");
	printf("new = %s\n", new);
	free(new);
	return (0);
} */
