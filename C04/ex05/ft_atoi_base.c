/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysantos- <ysantos-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 16:39:09 by ysantos-          #+#    #+#             */
/*   Updated: 2025/08/09 18:43:10 by ysantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

int	ft_isspace(char c)
{
	if (c == '\f' || c == '\n' || c == '\r'
		|| c == '\t' || c == '\v' || c == ' ')
		return (1);
	return (0);
}

/* Check if base is valid. */
int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = -1;
	if (!base[0] || !base[1])
		return (0);
	while (base[++i])
	{
		if (base[i] == '+' || base[i] == '-' || ft_isspace(base[i]))
			return (0);
		j = i;
		while (base[++j])
			if (base[i] == base[j])
				return (0);
	}
	return (1);
}

int	get_nbr(char *str, char *base)
{
	int	i;
	int	j;
	int	nbr;
	int	base_size;

	nbr = 0;
	i = -1;
	base_size = ft_strlen(base);
	while (str[++i])
	{
		j = -1;
		while (base[++j])
		{
			if (str[i] == base[j])
			{
				nbr *= base_size;
				nbr += j;
				break ;
			}
			else if (!base[j + 1])
				return (nbr);
		}
	}
	return (nbr);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sig;

	if (!ft_check_base(base))
		return (0);
	sig = 1;
	i = 0;
	while (ft_isspace(str[i]))
		++i;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			sig *= -1;
	}
	return (get_nbr(&str[i], base) * sig);
}

/* int	main()	{
	char	*str = "101101";
	char	*base = "01";
	int		nbr;

	nbr = ft_atoi_base(str, base);
	printf("%d\n", nbr);
	return (0);
} */

/*	https://www.rapidtables.com/convert/number/hex-to-decimal.html
	str = "101101",
	base = "01",
	expected_output = 45
	
	str = "ff",
    base = "0123456789abcdef",
    expected_output = 255
	
	str = "    +-14353",
    base = "0123456789",
    expected_output = -14353
*/