/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysantos- <ysantos-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 17:31:54 by ysantos-          #+#    #+#             */
/*   Updated: 2025/08/11 17:39:44 by ysantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	if (min >= max)
		return (NULL);
	arr = (int *)malloc((max - min) * sizeof(int));
	if (!arr)
		return (NULL);
	i = -1;
	while (min < max)
		arr[++i] = min++;
	return (arr);
}

/* int	main(void)	{
	int *arr;
	int min = 15, max = 56, i = -1;
	arr = ft_range(min, max);

	while (++i < max - min)
		printf("%d, ", arr[i]);
	printf("\n");
	return (0);
} */