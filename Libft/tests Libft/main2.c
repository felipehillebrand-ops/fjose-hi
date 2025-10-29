/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjose-hi <fjose-hi@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 22:53:14 by fjose-hi          #+#    #+#             */
/*   Updated: 2025/10/20 18:41:25 by fjose-hi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft.h"

int	main(void)
{
	char		*tsl;
	int			csl;
	char		srclcpy[] = "Arara azul";
	char		dstlcpy[10];
	int			lenlcpy;
	char		bufferlcat[20] = "Arara ";
	const char	*adiclcat = "azul";
	size_t		t_tlcat;
	char		t1cmp[] = "abcdejgh";
	char		t2cmp[] = "abcdef";
	const char	*tstr;
	const char	*sstr;
	char		*rstr;
	char		satoi[] = "-1234";
	int			*arr;
	size_t		icalloc;
	size_t		ncalloc;
	char		*osd;
	char		*csd;

//ft_strlen
	tsl = "Arara azul";
	csl = ft_strlen(tsl);
	printf("\n---- Strlen tests ----\n");
	printf("%s\n", tsl);
	printf("%d\n", csl);
//ft_strlcpy
	printf("\n---- Strlcpy tests ----\n");
	lenlcpy = ft_strlcpy(dstlcpy, srclcpy, 9);
	printf("src: %s\n", srclcpy);
	printf("dst: %s\n", dstlcpy);
	printf("Tamanho da src: %d\n", lenlcpy);
	if (lenlcpy >= 7)
		printf("Aviso: a string foi truncada!\n");
//ft_strlcat
	printf("\n---- Strlcat tests ----\n");
	t_tlcat = ft_strlcat(bufferlcat, adiclcat, sizeof(bufferlcat));
	printf("Resultado da concatenação: \"%s\"\n", bufferlcat);
	printf("Tamanho total que tentou criar: %zu\n", t_tlcat);
//ft_strncmp
	printf("\n---- Strncmp tests ----\n");
	printf("Diferença --> %d\n", ft_strncmp(t1cmp, t2cmp, 7));
//ft_strnstr
	tstr = "Arara Azul";
	sstr = "ara";
	rstr = ft_strnstr(tstr, sstr, 5);
	printf("\n---- Strnstr tests ----\n");
	if (rstr)
		printf("Encontrado '%s' em '%s' em: \"%s\"\n", sstr, tstr, rstr);
	else
		printf("'%s' não encontrado em '%s\n", sstr, tstr);
//ft_atoi
	printf("\n---- Atoi tests ----\n");
	printf("%d\n", ft_atoi(satoi));
//ft_calloc
	icalloc = 0;
	ncalloc = 6;
	arr = (int *)ft_calloc(ncalloc, sizeof(int));
	printf("\n---- Calloc tests ----\n");
	if (arr == NULL)
	{
		printf("Falha na alocação de memória.\n");
		return (1);
	}
	printf("Valores após ft_calloc:\n");
	while (icalloc < ncalloc)
	{
		printf("arr[%zu] = %d\n", icalloc, arr[icalloc]);
		icalloc++;
	}
	free(arr);
//ft_strdup
	osd = "Arara azul";
	csd = ft_strdup(osd);
	printf("\n---- Strdup tests ----\n");
	if (csd == NULL)
	{
		printf("Erro na alocação de memória.\n");
		return (1);
	}
	printf("Original: %s\n", osd);
	printf("Cópia:    %s\n", csd);
	free(csd);
	return (0);
}
