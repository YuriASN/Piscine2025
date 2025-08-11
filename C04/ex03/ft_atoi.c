/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysantos- <ysantos-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 15:42:51 by ysantos-          #+#    #+#             */
/*   Updated: 2025/08/11 18:37:55 by ysantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_isspace(char c)
{
	if (c == '\f' || c == '\n' || c == '\r'
		|| c == '\t' || c == '\v' || c == ' ')
		return (1);
	return (0);
}

/** @brief
 * Transforms the begging of the string
 * to a int. Jumps through spaces and signs before number,
 * and every (-) minus changes the int sign
 * @param str
 * String with the number
 */
int	ft_atoi(char *str)
{
	int	nbr;
	int	sig;
	int	i;

	sig = 1;
	i = 0;
	nbr = 0;
	while (ft_isspace(str[i]))
		++i;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			sig *= -1;
	}
	while (ft_is_numeric(str[i]))
	{
		nbr *= 10;
		nbr += str[i++] - '0';
	}
	nbr *= sig;
	return (nbr);
}

/* int main()	{
	char *str = "  --+--5946";

	printf("Atoi = %d\n", ft_atoi(str));
	return (0);
} */