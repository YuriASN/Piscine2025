/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysantos- <ysantos-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 15:38:48 by ysantos-          #+#    #+#             */
/*   Updated: 2025/08/11 18:38:17 by ysantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/** @brief
 * Prints a integer on stdout.
 * @param nb
 * Int to be written. */
void	ft_putnbr(int nb)
{
	long int	n;
	char		c;

	n = nb;
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	if (n > 9)
		ft_putnbr(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
}

/* int	main()	{

	ft_putnbr(-159753); write(1, "\n", 1);
	ft_putnbr(-98465); 	write(1, "\n", 1);
	ft_putnbr(0); 		write(1, "\n", 1);
	ft_putnbr(9846513); write(1, "\n", 1);
	ft_putnbr(59753); 	write(1, "\n", 1);
	return (0);
} */