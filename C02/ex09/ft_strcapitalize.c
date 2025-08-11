/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysantos- <ysantos-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 17:49:15 by ysantos-          #+#    #+#             */
/*   Updated: 2025/08/11 18:26:23 by ysantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_uppercase(char c)
{
	if (c < 'A' || c > 'Z')
		return (0);
	return (1);
}

int	ft_islower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	ft_isalphanum(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/** @brief
 * Change all first letters of words
 * to uppercase and next to lowercase.
 * A word is made of letters and numbers.
 * @param str
 * String to be changed. */
char	*ft_strcapitalize(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (ft_islower(str[i]))
			str[i] -= 32;
		while (str[i] && ft_isalphanum(str[i]))
		{
			i++;
			if (ft_is_uppercase(str[i]))
				str[i] += 32;
		}
	}
	return (str);
}

/*int main()	{
	char str[100] = "ola, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";

	ft_strcapitalize(str);
	printf("%s\n", str);

	return (0);
}*/
