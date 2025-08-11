/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysantos- <ysantos-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 17:44:21 by ysantos-          #+#    #+#             */
/*   Updated: 2025/08/11 18:24:57 by ysantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/** @brief
 * Change all lowercase letters to lowercase
 * @param
 * String to go under the change */
char	*ft_strlowcase(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
	return (str);
}

/*int main()	{
	char str[100] = "THIS WILL ALL GO DOWN";

	printf("%s\n", ft_strlowcase(str));
	strcpy(str,"do nothing");
	printf("%s\n", ft_strlowcase(str));
	strcpy(str, "& %% ( nothing to do");
	printf("%s\n", ft_strlowcase(str));
	strcpy(str, "ThIs WiLl Be AlL dOwN");
	printf("%s\n", ft_strlowcase(str));
	strcpy(str, "WHY 5 tests? TEST numbers");
	printf("%s\n", ft_strlowcase(str));

	return (0);
}*/
