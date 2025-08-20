/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysantos- <ysantos-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 19:41:12 by ysantos-          #+#    #+#             */
/*   Updated: 2025/08/20 18:27:36 by ysantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb)
{
	char		c;
	long int	n;

	n = nb;
	if (n < 0)
	{
		n *= -1;
		write(1, "-", 1);
	}
	if (n >= 10)
		ft_putnbr(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
}

int	get_digits(int n)
{
	int	d;

	d = 0;
	while (n)
	{
		d++;
		n /= 10;
	}
	return (d);
}

int	order_nbr(int nbr)
{
	int	decimal;
	int	i_digit;
	int	n_digit;

	decimal = 1;
	while ((nbr / 10) / decimal)
		decimal *= 10;
	while (decimal > 1)
	{
		i_digit = (nbr / decimal) % 10;
		if (!i_digit)
		{
			decimal = 1;
			while ((nbr / 10) / decimal)
				decimal *= 10;
			continue ;
		}
		n_digit = nbr % decimal;
		if (i_digit > n_digit)
			nbr += (i_digit + 1) * (decimal / 10);
		else
			decimal /= 10;
	}
	return (nbr);
}

void	ft_print_combn(int n)
{
	int	nbr;
	int	digits;

	nbr = 1;
	digits = 1;
	while (++digits < n)
		nbr *= 10;
	nbr = order_nbr(nbr);
	digits = get_digits(nbr);
	if (n == 1)
		write(1, "0, ", 3);
	while (digits <= n)
	{
		if (digits < n)
			write(1, "0", 1);
		if (digits <= n)
			ft_putnbr(nbr);
		nbr++;
		if (!(nbr % 10))
			nbr = order_nbr(nbr);
		digits = get_digits(nbr);
		if (digits <= n)
			write (1, ", ", 2);
	}
}

/* int main()	{

	ft_print_combn(3);
	write(1, "\n", 1);
	return (0);
} */