/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysantos- <ysantos-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 13:40:25 by ysantos-          #+#    #+#             */
/*   Updated: 2025/08/11 18:38:22 by ysantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/** @brief
 * Prints a integer on stdout.
 * @param nb
 * Int to be written. */
void	ft_putnbr(int nb)
{
	char	c;
	ssize_t	n;

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

/*int main(){
	ft_putnbr(123456789);
	write(1, "\n", 1);
    ft_putnbr(-1500);
 	write(1, "\n", 1);
 	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(-42);
	write(1, "\n", 1);
	ft_putnbr(2147483647);	//int MAX
	write(1, "\n", 1);
	ft_putnbr(-2147483648);	//int MIN
	write(1, "\n", 1);

	return (0);
}*/
