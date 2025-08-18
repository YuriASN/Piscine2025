/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysantos- <ysantos-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 19:06:14 by ysantos-          #+#    #+#             */
/*   Updated: 2025/08/11 18:05:11 by ysantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

/** @brief
 * Compare 2 strings returning 0 if they match
 * or the difference from char on s1 to char on s2 */
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = -1;
	while (s1[++i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
	return (0);
}

/*int main()	{
	printf("Original = %d\n", strcmp("This is the same", "This is the same"));
	printf("Mine = %d\n", ft_strcmp("This is the same", "This is the same"));

	printf("Original = %d\n", strcmp("This s1 is Gigger", "This s1 is Bigger"));
	printf("Mine = %d\n", ft_strcmp("This s1 is Gigger", "This s1 is Bigger"));

	printf("Original = %d\n",strcmp("This s1 is smaller", "this s1 is tmaller"));
	printf("Mine = %d\n", ft_strcmp("This s1 is smaller", "this s1 is tmaller"));


	printf("Original = %d\n",    strcmp("s1 is larger", "s1 is large"));
	printf("Mine = %d\n", ft_strcmp("s1 is larger", "s1 is large"));


	return (0);
}*/
