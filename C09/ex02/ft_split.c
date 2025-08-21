/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysantos- <ysantos-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 13:19:33 by ysantos-          #+#    #+#             */
/*   Updated: 2025/08/15 13:19:43 by ysantos-         ###   ########.fr       */
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
 * Sees if char in s1 is equal to any char in s2
 * @return How many chars were the same */
int	has_same_char(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i])
	{
		j = -1;
		while (s2[++j])
		{
			if (s2[j] == s1[i])
			{
				i++;
				break ;
			}
		}
		if (!s2[j])
			return (i);
	}
	return (i);
}

/** @brief
 * Count how many strings have divided by set.
 * @param str
 * String to search
 * @param set
 * Divider passed as string */
int	count_strings(char *str, char *set)
{
	int	count;
	int	i;
	int	flag;

	i = -1;
	count = 0;
	if (!str || !ft_strlen(str) || !set)
		return (0);
	while (str[++i])
	{
		flag = 0;
		if (has_same_char(&str[i], set))
		{
			if (i != 0)
				flag = 1;
			i += has_same_char(&str[i], set);
			if (!str[i])
				flag = 0;
			i--;
		}
		if (flag && str[i])
			count++;
	}
	return (count + 1);
}

/** @brief
 * Returns allocated 1st string until set is find
 * @param str
 * String to search
 * @param set
 * Divider of string */
char	*get_str(char *str, char *set)
{
	char	*new;
	int		i;
	int		size;

	size = 0;
	i = -1;
	while (str[++i] && !has_same_char(&str[i], set))
		size++;
	new = (char *)malloc(sizeof(char) * size + 1);
	if (!new)
		return (NULL);
	i = -1;
	while (++i < size)
		new[i] = str[i];
	new[i] = '\0';
	return (new);
}

/** @brief
 * Split string in array of strings divided by charset
 * @param	str
 * String to be divided
 * @param charset
 * Divider passed as string */
char	**ft_split(char *str, char *charset)
{
	int		c_strs;
	char	**strs;
	int		i;
	int		j;

	if (!str)
		return (NULL);
	c_strs = count_strings(str, charset);
	strs = (char **)malloc(sizeof(char *) * (c_strs + 1));
	if (!strs)
		return (NULL);
	strs[c_strs] = NULL;
	i = -1;
	j = 0;
	while (++i < c_strs)
	{
		if (has_same_char(&str[j], charset))
			j += has_same_char(&str[j], charset);
		strs[i] = get_str(&str[j], charset);
		j += ft_strlen(strs[i]);
	}
	return (strs);
}

//arg1 string, arg2 chars that are splitters
/* int	main(int argc, char **argv)
{
	if (!argc)
		return (0);
	int i = -1;
	char **strs = ft_split(argv[1], argv[2]);
	if (!strs)
		return (1);
	printf("Strings splited are:\n");
	while (strs[++i])
		printf("%s\n", strs[i]);
	i = -1;
	while (strs[++i])
		free(strs[i]);
	free(strs);
	return (0);
} */