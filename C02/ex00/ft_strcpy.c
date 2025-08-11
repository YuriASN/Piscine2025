/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysantos- <ysantos-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 19:33:25 by ysantos-          #+#    #+#             */
/*   Updated: 2025/08/11 18:29:15 by ysantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/** @brief
 * Copy source to destination until end of source
 * @param dest
 * String to copy to
 * @param src
 * String to copy from */
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = -1;
	while (src[++i])
		dest[i] = src[i];
	dest[i] = src[i];
	return (dest);
}

/*int main()	{
	char fonte[100] = "This is source";
	char destino[100] = "This is destination";

	if (sizeof(destino) < sizeof(fonte))
		return (1);

	printf("fonte= \"%s\"\ndest = \"%s\"\n~\n", fonte, destino);
	strcpy(destino, fonte);		//funcao original
	printf("ORIGINAL\nfonte= \"%s\"\ndest = \"%s\"\n", fonte, destino);
	ft_strcpy(destino, "My function!");	//minha funcao
	printf("MINHA\nfonte= \"%s\"\ndest = \"%s\"\n~\n", "My function!", destino);

	return (0);
}*/
