/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysantos- <ysantos-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 20:18:46 by ysantos-          #+#    #+#             */
/*   Updated: 2025/08/09 21:03:59 by ysantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	fac;

	fac = 1;
	if (nb < 0)
		return (0);
	if (nb > 1)
		fac *= ft_recursive_factorial(nb - 1);
	if (nb)
		fac *= nb;
	return (fac);
}

/* int main()	{
	int nb = 8;

	printf("Factorial of %d is: %d\n", nb, ft_recursive_factorial(nb));
	return (0);
} */