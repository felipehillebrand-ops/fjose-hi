/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_add.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjose-hi <fjose-hi@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 22:53:25 by fjose-hi          #+#    #+#             */
/*   Updated: 2025/10/20 15:16:29 by fjose-hi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft.h"

int	main(void)
{
	char			*osstr;
	unsigned int	start;
	size_t			lensstr;
	char			*substr;
	char			*s1join;
	char			*s2join;
	char			*rjoin;
	const char		*s1trim;
	const char		*settrim;
	char			*rtrim;
	char			*ssplit;
	char			**vsplit;
	int				nitoa;
	char			*stritoa;

//ft_substr
	printf("\n---- Substr tests ----\n");
	osstr = "Arara azul";
	start = 6;
	lensstr = 3;
	substr = ft_substr(osstr, start, lensstr);
	if (!substr)
	{
		printf("Erro na alocação de memória!\n");
		return (1);
	}
	printf("String original: %s\n", osstr);
	printf("Substring (start=%u, len=%zu): %s\n", start, lensstr, substr);
	free(substr);
	start = 50;
	substr = ft_substr(osstr, start, lensstr);
	printf("Substring com start fora da string: '%s'\n", substr);
	free(substr);
	start = 7;
	lensstr = 4;
	substr = ft_substr(osstr, start, lensstr);
	printf("Substring com len maior que o resto: '%s'\n", substr);
	free(substr);
//ft_strjoin
	s1join = "Arara ";
	s2join = "azul";
	printf("\n---- Strjoin tests ----\n");
	rjoin = ft_strjoin(s1join, s2join);
	if (rjoin)
	{
		printf("Resultado: %s\n", rjoin);
		free(rjoin);
	}
	else
		printf("Falha na alocação de memória. \n");
//ft_strtrim
	printf("\n---- Strtrim tests ----\n");
	s1trim = "c1db@bArara azuldb@1c@1d";
	settrim = "1bc@d";
	rtrim = ft_strtrim(s1trim, settrim);
	if (rtrim)
	{
		printf("Trimmed string: '%s'\n", rtrim);
		free(rtrim);
	}
	else
		printf("Trimming failed\n");
//ft_split
	printf("\n---- Split tests ----\n");
	ssplit = "  Brilho da asa azulada da arara azul";
	vsplit = ft_split(ssplit, ' ');
	while (*vsplit)
		printf("%s\n", *vsplit++);
//ft_itoa
	printf("\n---- Itoa tests ----\n");
	nitoa = -12345;
	stritoa = ft_itoa(nitoa);
	printf("%s\n", stritoa);
	free(stritoa);
	return (0);
}
