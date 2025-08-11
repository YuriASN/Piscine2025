/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysantos- <ysantos-@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 13:23:46 by ysantos-          #+#    #+#             */
/*   Updated: 2025/08/02 14:43:38 by ysantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;

	if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	c = nb % 10 + '0';
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			if (a <= 9)
				write(1, "0", 1);
			ft_putnbr(a);
			write(1, " ", 1);
			if (b <= 9)
				write(1, "0", 1);
			ft_putnbr(b);
			if (a != 98)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}

/*int main (){
	ft_print_comb2();
	return(0);
}*/
