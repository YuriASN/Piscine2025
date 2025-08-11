/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysantos- <ysantos-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 17:17:14 by ysantos-          #+#    #+#             */
/*   Updated: 2025/08/10 17:28:59 by ysantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	res;

	res = 0;
	if (index < 0)
		return (-1);
	if (!index)
		return (0);
	if (index == 1 || index == 2)
		return (1);
	res = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (res);
}

/* int	main()	{
	int nb = 3;
	printf("Fibonacci in index %d is: %d\n", nb, ft_fibonacci(nb));
	nb = 17;
	printf("Fibonacci in index %d is: %d\n", nb, ft_fibonacci(nb));
	nb = -1;
	printf("Fibonacci in index %d is: %d\n", nb, ft_fibonacci(nb));
	nb = 0;
	printf("Fibonacci in index %d is: %d\n", nb, ft_fibonacci(nb));
	nb = 2;
	printf("Fibonacci in index %d is: %d\n", nb, ft_fibonacci(nb));
	return (0);
} */