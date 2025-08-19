/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysantos- <ysantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 15:59:39 by ysantos-          #+#    #+#             */
/*   Updated: 2025/08/20 00:04:35 by ysantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

/* Check if base is valid. */
int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = -1;
	if (ft_strlen(base) <= 1)
		return (0);
	while (base[++i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i;
		while (base[++j])
			if (base[i] == base[j])
				return (0);
	}
	return (1);
}

/**
 * @brief
 * Prints the number with the given base
 * @param n
 * The number to convert
 * @param
 * The base to convert to */
void	print_base(long n, char *base)
{
	int	base_size;

	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	base_size = ft_strlen(base);
	if (n >= base_size)
		print_base(n / base_size, base);
	write(1, &base[n % base_size], 1);
}

/** @brief
 * Writes the number on stdout in a different base
 * @param nbr
 * Number to be converted
 * @param base
 * Base used for conversion */
void	ft_putnbr_base(int nbr, char *base)
{
	if (!ft_check_base(base))
		return ;
	print_base(nbr, base);
}

/* int main()	{
	int		nbr = -2147483648;
	char	*base = "01";

	ft_putnbr_base(nbr, base);
	write(1, "\n", 1);
	return (0);
} */

//https://www.rapidtables.com/convert/number/hex-to-decimal.html
