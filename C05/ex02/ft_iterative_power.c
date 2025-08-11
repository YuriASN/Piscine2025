/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysantos- <ysantos-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 20:40:28 by ysantos-          #+#    #+#             */
/*   Updated: 2025/08/09 21:09:21 by ysantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	res;
	int	i;

	i = 1;
	res = nb;
	if ((!nb && !power) || !power)
		return (1);
	if (!nb || power < 0)
		return (0);
	while (i++ < power)
		res *= nb;
	return (res);
}

/* int main()	{
	int nb = 5;
	int pw = 7;
	printf("Power of %d to %d is: %d\n", nb, pw, ft_iterative_power(nb, pw));
	return (0);
} */