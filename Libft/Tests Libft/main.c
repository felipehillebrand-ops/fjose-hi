/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjose-hi <fjose-hi@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 22:53:14 by fjose-hi          #+#    #+#             */
/*   Updated: 2025/10/19 13:22:45 by fjose-hi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft.h"

int	main(void)
{
	char			bufferm[10];
	int				ms;
	char			bufferb[10] = "abcdefghi";
	char			strb[] = "Arara azul";
	unsigned int	ib;
	unsigned int	lb;
	char			srcmc[] = "Arara azul";
	char			destmc[20];
	char			srcmm[] = "Arara azul";
	char			destmm[20];
	const char		*strmchr;
	char			cmchr;
	size_t			lmchr;
	char			*rmchr;
	char			strmcmp1[] = "abcdefgh";
	char			strmcmp2[] = "abcdei";

//ft_memset
	ms = 0;
	ft_memset(bufferm, 'X', 10);
	printf("\n---- Memset tests ----\n");
	while (ms < 10)
	{
		printf("%c ", bufferm[ms]);
		ms++;
	}
	printf("\n");
//ft_bzero
	ib = 0;
	lb = 10;
	printf("\n---- Bzero tests ----\n");
	printf("Antes do ft_bzero: %s\n", strb);
	ft_bzero(strb, 5);
	printf("Depois do ft_bzero: ");
	while (ib < lb)
	{
		if (strb[ib] == 0)
			printf("\\0");
		else
			printf("%c", strb[ib]);
		ib++;
	}
	printf("\n");
//ft_memcpy
	printf("\n---- Memcpy tests ----\n");
	ft_memcpy(destmc, srcmc, 11);
	printf("String copiada: %s\n", destmc);
//ft_memmove
	printf("\n---- Memmove tests ----\n");
	ft_memmove(destmm, srcmm, 10);
	printf("String copiada: %s\n", destmm);
//ft_memchr
	strmchr = "Arara azul";
	cmchr = 'a';
	lmchr = 10;
	rmchr = (char *)ft_memchr(strmchr, cmchr, lmchr);
	printf("\n---- Memchr tests ----\n");
	if (rmchr != NULL)
		printf("Caractere '%c' encontrado na posição: %ld\n", cmchr, rmchr - strmchr);
	else
		printf("Caractere '%c' não encontrado nos primeiros %zu bytes.\n", cmchr, lmchr);
//ft_memcmp
	printf("\n---- Memcmp tests ----\n");
	printf("Diferença --> %d\n", ft_memcmp(strmcmp1, strmcmp2, 7));
	return (0);
}
