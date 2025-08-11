/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysantos- <ysantos-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 20:11:07 by ysantos-          #+#    #+#             */
/*   Updated: 2025/08/09 21:02:38 by ysantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	fac;
	int	x;

	if (nb < 0)
		return (0);
	x = nb;
	fac = 1;
	while (x)
	{
		fac *= x--;
	}
	return (fac);
}

/* int main()	{
	int nb = 8;

	printf("Factorial of %d is: %d\n", nb, ft_iterative_factorial(nb));
	return (0);
} */