/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysantos- <ysantos-@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 20:31:27 by ysantos-          #+#    #+#             */
/*   Updated: 2025/08/03 20:31:30 by ysantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (str[i] < '0' || str[i] > '9')
			return (0);
	return (1);
}

/*int main() {
	printf("%d\n", ft_str_is_numeric("16843213")); //1
	printf("%d\n", ft_str_is_numeric("65231-")); //0
	printf("%d\n", ft_str_is_numeric("35132asdf532132")); //0
	printf("%d\n", ft_str_is_numeric("351321")); //1
	printf("%d\n", ft_str_is_numeric("-6515")); //0

	return (0);
}*/
