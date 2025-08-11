/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysantos- <ysantos-@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 20:24:20 by ysantos-          #+#    #+#             */
/*   Updated: 2025/08/04 20:24:22 by ysantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print_hex(char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (c > 16)
		ft_print_hex(c / 16);
	write(1, &hex[c % 16], 1);
}

int	ft_is_printable(char c)
{
	if ((c >= 0 && c <= 31) || c > 126)
		return (0);
	return (1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (!ft_is_printable(str[i]))
		{
			write(1, "\\", 1);
			if (str[i] < 16)
				write(1, "0", 1);
			ft_print_hex(str[i]);
		}
		else
			write(1, &str[i], 1);
	}
}

/*int main()	{
	printf("Hex table of non printable can be found at: condor.depaul.edu/sjost/lsp121/documents/ascii-npr.htm\n");
    ft_putstr_non_printable("We have newline \n <~ 0a");
    write(1, "\n", 1);
    ft_putstr_non_printable("we have a bell \a <~ 07");
	write(1, "\n", 1);
    ft_putstr_non_printable("We have a tab \t <~ 09");
	write(1, "\n", 1);
    ft_putstr_non_printable("We have a vertical tab \v <~ 0b");
	write(1, "\n", 1);
    ft_putstr_non_printable("We have a carriage return \r <~ 0d");
	write(1, "\n", 1);
    ft_putstr_non_printable("We have a escape \x1b <~ 1b");
	write(1, "\n", 1);
	ft_putstr_non_printable("We have a Syncronous idle \x16 <~ 16");
	write(1, "\n", 1);

    return 0;
}*/
