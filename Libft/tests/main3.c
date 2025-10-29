/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjose-hi <fjose-hi@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 22:53:14 by fjose-hi          #+#    #+#             */
/*   Updated: 2025/10/19 12:51:27 by fjose-hi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft.h"

int	main(void)
{
	char		a;
	char		d;
	char		an;
	int			as;
	int			p;
	int			tu;
	int			tl;
	const char	*strchr;
	char		cchr;
	char		*rchr;
	const char	*strrchr;
	char		crchr;
	char		*rrchr;

//ft_isalpha
	a = 'f';
	printf("\n---- Isalpha tests ----\n");
	if (ft_isalpha(a))
		printf("%c é uma letra.\n", a);
	else
		printf("%c não é uma letra.\n", a);
//ft_isdigit
	d = '7';
	printf("\n---- Isdigit tests ----\n");
	if (ft_isdigit(d))
		printf("%c é um dígito .\n", d);
	else
		printf("%c não é um dígito.\n", d);
//ft_isalnum
	an = '&';
	printf("\n---- Isalnum tests ----\n");
	if (ft_isalnum(an))
		printf("%c é alfanumérico.\n", an);
	else
		printf("%c não é alfanumérico.\n", an);
//ft_isascii
	as = 68;
	printf("\n---- Isascii tests ----\n");
	if (ft_isascii(as))
		printf("%c é ASCII.\n", as);
	else
		printf("%c não é ASCII.\n", as);
//ft_isprint
	p = 13;
	printf("\n---- Isprint tests ----\n");
	if (ft_isprint(p))
		printf("%c é imprímivel.\n", p);
	else
		printf("%c não é imprímivel.\n", p);
//ft_toupper
	tu = 100;
	printf("\n---- Toupper tests ----\n");
	printf("Antes: %c\n", tu);
	printf("Depois: %c\n", ft_toupper(tu));
//ft_tolower
	tl = 69;
	printf("\n---- Tolower tests ----\n");
	printf("Antes: %c\n", tl);
	printf("Depois: %c\n", ft_tolower(tl));
//ft_strchr
	strchr = "Arara azul";
	cchr = 'a';
	rchr = ft_strchr(strchr, cchr);
	printf("\n---- Strchr tests ----\n");
	if (rchr != NULL)
		printf("Caractere '%c' encontrado na posição: %ld\n", cchr, rchr - strchr);
	else
		printf("Caractere '%c' não encontrado na string.\n", cchr);
	rchr = ft_strchr(strchr, '\0');
	if (rchr != NULL)
		printf("Caractere nulo '\\0' encontrado na posição: %ld\n", rchr - strchr);
//ft_strrchr
	strrchr = "Arara azul";
	crchr = 'a';
	rrchr = ft_strrchr(strrchr, crchr);
	printf("\n---- Strrchr tests ----\n");
	if (rrchr != NULL)
		printf("Última ocorrência de '%c' encontrada em: \"%s\"\n", crchr, rrchr);
	else
		printf("Caractere '%c' não encontrado na string.\n", crchr);
	return (0);
}
