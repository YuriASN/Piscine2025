/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysantos- <ysantos-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 18:08:47 by ysantos-          #+#    #+#             */
/*   Updated: 2025/08/20 21:23:10 by ysantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/** @brief
 * Copy source to destination until end of source
 * @param dest
 * String to copy to
 * @param src
 * String to copy from */
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = -1;
	while (src[++i])
		dest[i] = src[i];
	dest[i] = src[i];
	return (dest);
}

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
	char	new;

	poss = 0;
	new = '0';
	while (new <= '9')
	{
		if (!is_eaten(str, index, new))
		{
			str[index] = new;
			poss += print_possibility(str, index + 1);
			if (index == 9)
			{
				putcomb(str);
				return (poss + 1);
			}
		}
		new++;
	}
	return (poss);
}

int	ft_ten_queens_puzzle(void)
{
	char	comb[10];
	int		all_poss;

	ft_strcpy(comb, "0000000000");
	all_poss = print_possibility(comb, 0);
	return (all_poss);
}

//test
/* 
#include <stdio.h>
int main()	{
	printf("%d possibilities\n", ft_ten_queens_puzzle());
	return (0);
}//0257948136 */