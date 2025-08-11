/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysantos- <ysantos-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 20:50:22 by ysantos-          #+#    #+#             */
/*   Updated: 2025/08/11 18:23:07 by ysantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/** @brief
 * Checks if string is all uppercase
 * @param str
 * string to be checked */
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
	return (1);
}

/*int main(){
	printf("Returned %d\n", ft_str_is_uppercase("ONLY UPPER CASES N SPACE"));
	//return 0 because of space
	printf("Returned %d\n", ft_str_is_uppercase("SL1MSH4DY"));
	//return 0 cause' of numbers
	printf("Returned %d\n", ft_str_is_uppercase("WEHAVEaLOWERCASE"));
	//return 0 cause of lowercase
	printf("Returned %d\n", ft_str_is_uppercase("NO GOOD CAUSE SPACES"));
	//return 0 space again
	printf("Returned %d\n", ft_str_is_uppercase("THISONEISFIRE"));
	//return 1

	return (0);
}*/
