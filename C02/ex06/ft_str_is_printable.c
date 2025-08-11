/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysantos- <ysantos-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 21:01:40 by ysantos-          #+#    #+#             */
/*   Updated: 2025/08/11 18:15:13 by ysantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/** @brief
 * Checks if the whole string only has printable characters.
 * @param str
 * String to search on.
 */
int	ft_str_is_printable(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		if ((str[i] >= 0 && str[i] <= 31) || str[i] > 126)
			return (0);
	return (1);
}

/*int main() 	{
	printf("%d\n", ft_str_is_printable("This is all pr1ntable **")); //1
	printf("%d\n", ft_str_is_printable("This isn't\tjust cause of tab")); //0
	printf("%d\n", ft_str_is_printable("This has newline so no\n")); //0
	printf("%d\n", ft_str_is_printable("# symbols @ but they %% print")); //1
	printf("%d\n", ft_str_is_printable("\aThis has bell")); //0

	return(0);
}*/
