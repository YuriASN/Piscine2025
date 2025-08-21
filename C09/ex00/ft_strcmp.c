/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysantos- <ysantos-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 13:02:02 by ysantos-          #+#    #+#             */
/*   Updated: 2025/08/15 13:16:49 by ysantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
