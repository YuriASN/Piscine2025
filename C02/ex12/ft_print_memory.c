/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysantos- <ysantos-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 21:40:08 by ysantos-          #+#    #+#             */
/*   Updated: 2025/08/10 20:54:29 by ysantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_is_printable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

void	ft_print_hex(ssize_t val, int sz)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (val > 16)
	{
		sz--;
		ft_print_hex(val / 16, sz);
	}
	else
		while (--sz)
			write(1, "0", 1);
	write(1, &hex[val % 16], 1);
}

void	ft_print_str_hex(char *str, int size)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		if (i < size)
			ft_print_hex(str[i], 2);
		else
			write(1, "  ", 2);
		if (i % 2)
			write(1, " ", 1);
		++i;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	char			*str;

	if (size == 0)
		return (addr);
	str = addr;
	ft_print_hex((ssize_t)str, 16);
	write(1, ": ", 2);
	ft_print_str_hex(str, size);
	i = 0;
	while (i < size)
	{
		if (ft_is_printable(str[i]))
			write(1, &str[i], 1);
		else
			write(1, ".", 1);
		i++;
	}
	write(1, "\n", 1);
	return (addr);
}

/* int main()	{
//In the test, a few hex from the value will be different
//as I use diferent non-printable than the test
    ft_print_memory("Bonjour les amin", 16);
    ft_print_memory("ches\n\n\nc\n est fo", 16);
    ft_print_memory("u\atout\tce qu on ", 16);
    ft_print_memory("peut faire avec.", 16);
    ft_print_memory("\t\tprint_memory\a\a", 16);
    ft_print_memory("\n\nlol\tlol\a \a", 12);

    return 0;
} */
