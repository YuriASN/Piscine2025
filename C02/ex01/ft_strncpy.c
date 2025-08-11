/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysantos- <ysantos-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 19:37:37 by ysantos-          #+#    #+#             */
/*   Updated: 2025/08/11 18:28:56 by ysantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/** @brief
 * Copy source to destination until number of bytes,
 * adding NULL for next bytes if source ends.
 * @param dest
 * String to copy to
 * @param src
 * String to copy from
 * @param n
 * Amount of bytes to copy */
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = -1;
	while (++i < n && src[i])
		dest[i] = src[i];
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}

/*int main(){
	char fonte[100] = "This is source";
	char destino[100] = "This is destination";

	printf("fonte= \"%s\"\ndest = \"%s\"\n~\n", fonte, destino);
	if (sizeof(destino) < sizeof(fonte))
		return (1);
	strncpy(destino, fonte, 15);		//funcao original
	printf("ORIGINAL\nfonte= \"%s\"\ndest = \"%s\"\n", fonte, destino);
	ft_strncpy(destino, "This is mine!", 15);	//minha funcao
	printf("MINHA\nfonte= \"%s\"\ndest = \"%s\"\n~\n", "This is mine!", destino);
	return (0);
}*/
