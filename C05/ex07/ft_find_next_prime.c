/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysantos- <ysantos-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 17:58:10 by ysantos-          #+#    #+#             */
/*   Updated: 2025/08/10 18:09:33 by ysantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/**
 * @brief
 * Returns boolean if number is prime
 * @param nb
 * Number to be checked */
int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1 || (nb != 2 && !(nb % 2)))
		return (0);
	if (nb == 2)
		return (1);
	while (++i < nb)
	{
		if (!(nb % i))
			return (0);
	}
	return (1);
}

/** @brief
 * Returns the int that is prime
 * @param nb
 * Number to start from */
int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}

/* int main()	{
	int nb = 533;
	printf("From %d first prime is: %d\n", nb, ft_find_next_prime(nb));
	nb = -1500;
	printf("From %d first prime is: %d\n", nb, ft_find_next_prime(nb));
	nb = 2;
	printf("From %d first prime is: %d\n", nb, ft_find_next_prime(nb));
	nb = 6;
	printf("From %d first prime is: %d\n", nb, ft_find_next_prime(nb));
	nb = 17;
	printf("From %d first prime is: %d\n", nb, ft_find_next_prime(nb));
	return (0);
} */