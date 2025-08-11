/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysantos- <ysantos-@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 18:44:42 by ysantos-          #+#    #+#             */
/*   Updated: 2025/08/02 18:44:45 by ysantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	tmp;
	int	i;
	int	m;

	i = -1;
	while (++i < size - 1)
	{
		m = i;
		while (++m < size)
		{
			if (tab[i] > tab[m])
			{
				tmp = tab[i];
				tab[i] = tab[m];
				tab[m] = tmp;
			}
		}
	}
}

/*int main() {
	int tab[7] = {7691,94,693,278,51,686,7689};
	for (int i = 0; i < 7; i++)
		printf("%d, ", tab[i]);
	printf("\n");
	ft_sort_int_tab(tab, 7);
	for (int i = 0; i < 7; i++)
		printf("%d, ", tab[i]);
	printf("\n");
	return(0);
}*/
