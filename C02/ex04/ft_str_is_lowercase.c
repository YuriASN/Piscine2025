/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysantos- <ysantos-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 20:37:59 by ysantos-          #+#    #+#             */
/*   Updated: 2025/08/11 18:23:20 by ysantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/** @brief
 * Checks if string is all lowercase
 * @param str
 * string to be checked */
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
	return (1);
}

/*int main(){
	printf("Returned %d\n", ft_str_is_lowercase("This string is only char"));
	//return 0 because of space
	printf("Returned %d\n", ft_str_is_lowercase("sl1msh4dy"));
	//return 0 cause' of numbers
	printf("Returned %d\n", ft_str_is_lowercase("Wehaveauppercase"));
	//return 0 cause of uppercase
	printf("Returned %d\n", ft_str_is_lowercase("no good because of spaces"));
	//return 0 space again
	printf("Returned %d\n", ft_str_is_lowercase("thisoneisgood"));
	//return 1

	return (0);
}*/
