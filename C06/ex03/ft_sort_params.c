/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysantos- <ysantos-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 18:54:40 by ysantos-          #+#    #+#             */
/*   Updated: 2025/08/10 22:02:26 by ysantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putstr_newline(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
}

/** @brief
 * Swap two strings with each other */
void	swap_args(char **a1, char **a2)
{
	char	*tmp;

	tmp = 0;
	tmp = *a1;
	*a1 = *a2;
	*a2 = tmp;
}

/** @brief
 * Put the array of strings in ascii order
 * @param args
 * The array to sort */
void	put_in_order(char **args)
{
	int		i;
	int		j;
	int		c;

	i = -1;
	while (args[++i])
	{
		j = i;
		while (args[++j])
		{
			c = 0;
			while (args[i][c] && args[j][c] && args[i][c] == args[j][c])
				c++;
			if (args[i][c] > args[j][c])
				swap_args(&args[i], &args[j]);
		}
	}
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 1)
		return (0);
	put_in_order(&argv[1]);
	i = 0;
	while (++i < argc)
	{
		putstr_newline(argv[i]);
		write(1, "\n", 1);
	}
	return (0);
}
