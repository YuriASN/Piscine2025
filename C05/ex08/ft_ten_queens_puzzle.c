/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysantos- <ysantos-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 18:08:47 by ysantos-          #+#    #+#             */
/*   Updated: 2025/08/20 20:44:23 by ysantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	putcomb(char *str)
{
	write(1, str, 10);
	write(1, "\n", 1);
}

/* Checks if have the same number twice or
number is increment of previous numbers + difference of index */
int	is_eaten(char *str, int i, char c)
{
	int		j;
	char	pos;

	j = -1;
	if (!i)
		return (0);
	while (++j < i)
	{
		pos = str[j];
		if (c == pos || c == pos - ((i + '0') - (j + '0'))
			|| c == pos + ((i + '0') - (j + '0')))
			return (1);
	}
	return (0);
}

/* Prints the possibilities from the index foward
 * Recalls function reducing index */
int	print_possibility(char *str, int index)
{
	int		poss;
	int		i;
	char	new;

	poss = 0;
	i = index - 1;
	while (++i < 10)
	{
		new = i + '0';
		if (!is_eaten(str, i, new))
		{
			str[i] = new;
			poss += print_possibility(str, index + 1);
			if (index == 9)
			{
				putcomb(str);
				return (poss + 1);
			}
		}
	}
	return (poss);
}

//0257948136
int	ft_ten_queens_puzzle(void)
{
	char	*comb;
	int		all_poss;

	comb = "0000000000";
	all_poss = print_possibility(comb, 0);
	return (all_poss);
}

int main()	{
	printf("%d possibilities\n", ft_ten_queens_puzzle());
	return (0);
}