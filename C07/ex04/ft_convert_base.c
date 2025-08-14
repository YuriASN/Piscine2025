/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysantos- <ysantos-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 19:37:29 by ysantos-          #+#    #+#             */
/*   Updated: 2025/08/14 13:49:24 by ysantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str);
int	ft_isspace(char c);
int	ft_atoi_base(char *str, char *base);
int	ft_check_base(char *base);
int	get_nbr(char *str, char *base);

/**	@brief
 * Bond source on destination on a new string.
 * If no dest, returns just copy of src.
 * @param dest
 * String to be added to
 * @param src
 * String to add from */
char	*ft_strbond(char *dest, char *src)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = -1;
	str = (char *)malloc(sizeof(char) * (ft_strlen(src) + ft_strlen(dest) + 2));
	if (!str)
		return (NULL);
	while (dest && dest[i])
	{
		str[i] = dest[i];
		++i;
	}
	while (src[++j])
		str[i + j] = src[j];
	str[i + j] = '\0';
	str[i + j + 1] = '\0';
	if (src)
		free(src);
	return (str);
}

/** @brief
 * Convert the number with the given base
 * @param n
 * The number to convert
 * @param
 * The base to convert to */
char	*convert_to_base(long int n, char *base)
{
	int		base_size;
	char	*str;

	str = NULL;
	if (n < 0)
	{
		str = (char *)malloc(sizeof(char) * 2);
		str[0] = '-';
		str[1] = '\0';
		n *= -1;
	}
	base_size = ft_strlen(base);
	if (n >= base_size)
		str = ft_strbond(str, convert_to_base(n / base_size, base));
	else
	{
		str = (char *)malloc(sizeof(char) * 2);
		str [0] = '\0';
		str [1] = '\0';
	}
	str[ft_strlen(str)] = base[n % base_size];
	return (str);
}

/** @brief
 * Writes the number on stdout in a different base
 * @param nbr
 * Number to be converted
 * @param base
 * Base used for conversion */
char	*ft_putnbr_base(int nbr, char *base)
{
	char	*str;

	str = NULL;
	if (nbr == -2147483648 && base[0] == '0' && base[1] == '1')
	{
		str = ft_strbond(NULL, "-10000000000000000000000000000000");
		return (str);
	}
	str = convert_to_base(nbr, base);
	return (str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long int	nb;
	char		*res;

	if (!ft_check_base(base_from) || !ft_check_base(base_to))
		return (NULL);
	nb = ft_atoi_base(nbr, base_from);
	res = ft_putnbr_base(nb, base_to);
	return (res);
}

//tester
/* int main()	{
	char	*nbr = "42";
	char	*base_from = "0123456789";
	char	*base_to = "01";
	char	*res = NULL;
	res = ft_convert_base(nbr, base_from, base_to);
	printf("Num: %s, in: %s, to: %s is: %s\n", nbr, base_from, base_to, res);
	free(res);
	return (0);
} */