/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysantos- <ysantos-@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 19:44:02 by ysantos-          #+#    #+#             */
/*   Updated: 2025/08/03 19:44:05 by ysantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
		{
			continue ;
		}
		else
			return (0);
	}
	return (1);
}

/*int main(){
	printf("Returned %d\n", ft_str_is_alpha("This string is only char"));
	//return 0 because of space
	printf("Returned %d\n", ft_str_is_alpha("SlimShady"));
	//return 1 
	printf("Returned %d\n", ft_str_is_alpha("OpsA!CantGetIn"));
	//return 0 because of !
	printf("Returned %d\n", ft_str_is_alpha("ThisHas12Numbers"));
	//return 0 because of 12
	printf("Returned %d\n", ft_str_is_alpha("Thisstringisonlychar"));
	//return 1

	return (0);
}*/
