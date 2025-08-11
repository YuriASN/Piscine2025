/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysantos- <ysantos-@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 12:20:48 by ysantos-          #+#    #+#             */
/*   Updated: 2025/08/01 12:29:34 by ysantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
		write(1, "N", 1);
	else
		write(1, "P", 1);
}

/*int main(){
	ft_is_negative(5);
	write(1, "\n", 1);
	ft_is_negative(-5);
        write(1, "\n", 1);
	ft_is_negative(0);
        write(1, "\n", 1);
	ft_is_negative(15);
        write(1, "\n", 1);
	return(0);
}*/
