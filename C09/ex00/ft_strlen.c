/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysantos- <ysantos-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 13:02:03 by ysantos-          #+#    #+#             */
/*   Updated: 2025/08/15 13:09:10 by ysantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/** @brief
 * Returns the lenght of a string
 * @param str
 * String to count chars up to \0 */
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}
