/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysantos- <ysantos-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 14:02:20 by ysantos-          #+#    #+#             */
/*   Updated: 2025/08/20 21:29:07 by ysantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

/** @brief
 * Find and return the first occurrence of to_find in str.
 * @param str
 * String that will be searched.
 * @param to_find
 * String to find on the other */
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = -1;
	if (!to_find || !to_find[0])
		return (str);
	while (str[++i])
	{
		j = -1;
		while (to_find[++j] && to_find[j] == str[i + j])
			continue ;
		if (!to_find[j])
			return (&str[i]);
	}
	return (NULL);
}

/*int main()	{
	char *str = "This is to find lol and show the rest";
	char *find = "lol";

	printf("Found: %s\n", ft_strstr(str, find));

	return (0);
}*/
