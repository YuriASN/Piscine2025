/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysantos- <ysantos-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 17:41:06 by ysantos-          #+#    #+#             */
/*   Updated: 2025/08/11 17:49:09 by ysantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	arr = (int *)malloc((max - min) * sizeof(int));
	if (!arr)
		return (NULL);
	i = -1;
	while (min < max)
		arr[++i] = min++;
	return (arr);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	if (!range)
		return (-1);
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = ft_range(min, max);
	return (max - min);
}

/* int main()	{
	int *arr;
	int min = 15, max = 56, i = -1, sz;

	sz = ft_ultimate_range(&arr, min, max);
	while (++i < sz)
		printf("%d, ", arr[i]);
	printf("\n");
	return (0);
} */