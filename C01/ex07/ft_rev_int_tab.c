/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysantos- <ysantos-@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 18:31:40 by ysantos-          #+#    #+#             */
/*   Updated: 2025/08/02 18:31:43 by ysantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	tmp;
	int	i;

	i = -1;
	while (++i < --size)
	{
		tmp = tab[i];
		tab[i] = tab[size];
		tab[size] = tmp;
	}
}

/*int main()	{
	int tab[7] = {1,2,3,4,5,6,7};
	for (int i = 0; i < 7; i++)
		printf("%d,", tab[i]);
	printf("\n");
	ft_rev_int_tab(tab, 7);
	for (int i = 0; i < 7; i++)
		printf("%d,", tab[i]);
	printf("\n");
	return (0);
}*/
