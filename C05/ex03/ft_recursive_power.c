/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysantos- <ysantos-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 21:09:29 by ysantos-          #+#    #+#             */
/*   Updated: 2025/08/10 18:10:00 by ysantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	res;

	res = nb;
	if ((!nb && !power) || !power)
		return (1);
	if (!nb || power < 0)
		return (0);
	if (power > 1)
		res *= ft_recursive_power(nb, power - 1);
	return (res);
}

/* int main()	{
	int nb = 5;
	int pw = 7;
	printf("Power of %d to %d is: %d\n", nb, pw, ft_recursive_power(nb, pw));
	return (0);
} */