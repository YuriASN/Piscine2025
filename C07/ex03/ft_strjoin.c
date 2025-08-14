/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysantos- <ysantos-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 17:49:56 by ysantos-          #+#    #+#             */
/*   Updated: 2025/08/14 17:19:28 by ysantos-         ###   ########.fr       */
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

/** @brief
 * Copy source to destination until end of source
 * @param dest
 * String to copy to
 * @param src
 * String to copy from */
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = -1;
	while (src[++i])
		dest[i] = src[i];
	dest[i] = src[i];
	return (dest);
}

/**	@brief
 * Returns full size of all strings with the separator in the middle
 * @param sz
 * Amount of strings on the array
 * @param strs
 * Array of strings
 * @param sep
 * Separator */
int	get_full_size(int sz, char **strs, char *sep)
{
	int	i;
	int	full;

	i = -1;
	full = 0;
	while (++i < sz)
		full += ft_strlen(strs[i]);
	full += ft_strlen(sep) * (sz -1);
	return (full);
}

/** @brief
 * Joins the array of strings in one, adding a separator in between
 * @param size
 * Amount of strings on the array
 * @param strs
 * Array of strings
 * @param sep
 * Separator  */
char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		full_size;
	char	*str;

	if (!size)
	{
		str = (char *)malloc(1 * sizeof(char));
		str[0] = '\0';
		return (str);
	}
	full_size = get_full_size(size, strs, sep);
	str = (char *)malloc(full_size + 1 * sizeof(char));
	if (!str)
		return (NULL);
	str[0] = '\0';
	i = -1;
	while (++i < size)
	{
		ft_strcat(str, strs[i]);
		if (i < size - 1)
			ft_strcat(str, sep);
	}
	return (str);
}

//arg 1 is separator, next args is to join;
/* int main(int argc, char **argv)
{
	if (argc < 3)
		return (1);
	char *str = ft_strjoin(argc - 2, &argv[2], argv[1]);
	printf("%s\n", str);
	free(str);
	return (0);
} */