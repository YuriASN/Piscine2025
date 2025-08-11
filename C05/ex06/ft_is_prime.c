/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysantos- <ysantos-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 17:47:53 by ysantos-          #+#    #+#             */
/*   Updated: 2025/08/10 17:57:22 by ysantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

/* int main()	{
	int nbr = 23;
	if (ft_is_prime(nbr))
		printf("%d is prime\n", nbr);
	else
		printf("%d isn't prime\n", nbr);

	nbr = -23;
	if (ft_is_prime(nbr))
		printf("%d is prime\n", nbr);
	else
		printf("%d isn't prime\n", nbr);

	nbr = 65;
	if (ft_is_prime(nbr))
		printf("%d is prime\n", nbr);
	else
		printf("%d isn't prime\n", nbr);
} */