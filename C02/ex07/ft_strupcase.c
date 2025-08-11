/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysantos- <ysantos-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 21:16:43 by ysantos-          #+#    #+#             */
/*   Updated: 2025/08/11 18:24:39 by ysantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/** @brief
 * Change all lowercase letters to uppercase
 * @param
 * String to go under the change */
char	*ft_strupcase(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	return (str);
}

/*int main()	{
	char str[100] = "this will all go up";

	printf("%s\n", ft_strupcase(str));
	strcpy(str,"THIS IS DONE");
	printf("%s\n", ft_strupcase(str));
	strcpy(str, "& %% ( NOTHING TO DO");
	printf("%s\n", ft_strupcase(str));
	strcpy(str, "ThIs WiLl Be AlL uP");
	printf("%s\n", ft_strupcase(str));
	strcpy(str, "why 5 tests? test numbers");
	printf("%s\n", ft_strupcase(str));

	return (0);
}*/
