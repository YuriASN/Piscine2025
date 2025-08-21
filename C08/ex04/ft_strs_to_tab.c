/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysantos- <ysantos-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 18:35:53 by ysantos-          #+#    #+#             */
/*   Updated: 2025/08/20 22:38:14 by ysantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

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

	str = (char *)malloc(ft_strlen(src) + 1 * sizeof(char));
	if (!str)
		return (NULL);
	ft_strcpy(str, src);
	return (str);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*arr;

	if (!ac)
		return (NULL);
	arr = (t_stock_str *)malloc(sizeof(t_stock_str *) * (ac + 1));
	if (!arr)
		return (NULL);
	i = -1;
	while (++i < ac)
	{
		arr[i].size = ft_strlen(av[i]);
		arr[i].str = av[i];
		arr[i].copy = ft_strdup(av[i]);
	}
	arr[i].str = NULL;
	return (arr);
}
