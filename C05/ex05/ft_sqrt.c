/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysantos- <ysantos-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 17:29:47 by ysantos-          #+#    #+#             */
/*   Updated: 2025/08/10 18:28:08 by ysantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/* Substracting from nb consecutive odd numbers until you get 0.
how many substractions you did, is the square root of the number. */
int	ft_sqrt(int nb)
{
	int	odd;
	int	count;

	count = 0;
	odd = 1;
	if (nb <= 0)
		return (0);
	while (nb > 0)
	{
		nb -= odd;
		odd += 2;
		count++;
	}
	if (!nb)
		return (count);
	return (0);
}

/* int main()	{
	int nb = 8;
	printf("Square root of %d is: %d\n", nb, ft_sqrt(nb));
	nb = 16;
	printf("Square root of %d is: %d\n", nb, ft_sqrt(nb));
	nb = -52;
	printf("Square root of %d is: %d\n", nb, ft_sqrt(nb));
	nb = 159;
	printf("Square root of %d is: %d\n", nb, ft_sqrt(nb));
	nb = 64;
	printf("Square root of %d is: %d\n", nb, ft_sqrt(nb));
	return (0);
} */