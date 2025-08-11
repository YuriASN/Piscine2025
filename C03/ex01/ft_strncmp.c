/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysantos- <ysantos-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 19:28:26 by ysantos-          #+#    #+#             */
/*   Updated: 2025/08/11 18:07:42 by ysantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <string.h>
#include <stdio.h>

/** @brief
 * Compare 2 strings up to n bytes.
 * Returning 0 if they match or the difference
 * from char on s1 to char on s2 */
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] < s2[i])
			return (-1);
		if (s1[i] > s2[i])
			return (1);
		if (!s1[i] && !s2[i])
			break ;
		i++;
	}
	return (0);
}

/*int main()	{
printf("Orgn= %d\n", strncmp("This is the same", "This is the same", 16));
printf("Mine= %d\n\n",ft_strncmp("This is the same","This is the same", 16));
//Won't see difference as 11 is before it. 12 should show
printf("Orgn= %d\n", strncmp("This s1 is Gigger", "This s1 is Bigger", 11));
printf("Mine= %d\n\n",ft_strncmp("This s1 is Gigger","This s1 is Bigger",11));
//Will be -1 as scope gets to first difference
printf("Orgn= %d\n",strncmp("This s1 is smaller","this s1 is tmaller",12));
printf("Mine= %d\n\n",ft_strncmp("This s1 is smaller","this s1 is tmaller",12));
//Will be 0 as difference is out of 11 scope
printf("Orgn= %d\n",strncmp("s1 is larger", "s1 is large", 11));
printf("Mine= %d\n",ft_strncmp("s1 is larger","s1 is large",11));


	return (0);
}*/
