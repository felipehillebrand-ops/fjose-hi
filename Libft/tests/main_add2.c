/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_add2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjose-hi <fjose-hi@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 15:44:57 by fjose-hi          #+#    #+#             */
/*   Updated: 2025/10/19 21:03:02 by fjose-hi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include "../libft.h"

char	sample_function(unsigned int i, char c)
{
	i = 0;
	return (c - 32);
}

void	sample_function2(unsigned int i, char *c)
{
	i = 0;
	*c = *c + 32;
}

int	main(void)
{
	const char	*strmapi;
	char		*rmapi;
	char		striteri[] = "ARARAAZUL";
	int			fd;

	fd = open("saida.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1)
		return (1);
//ft_strmapi
	printf("\n---- Strmapi tests ----\n");
	strmapi = "araraazul";
	rmapi = ft_strmapi(strmapi, sample_function);
	if (rmapi)
	{
		printf("%s\n", rmapi);
		free(rmapi);
	}
//ft_striteri
	printf("\n---- Striteri tests ----\n");
	ft_striteri(striteri, sample_function2);
	printf("%s\n", striteri);
//ft_putchar_fd
	printf("\n---- Putchar_fd tests ----\n");
	ft_putchar_fd('F', 1);
	write(1, "\n", 1);
	ft_putchar_fd('g', fd);
	write(fd, "\n", 1);
//ft_putstr_fd
	printf("\n---- Putstr_fd tests ----\n");
	ft_putstr_fd("Arara", 1);
	write(1, "\n", 1);
	ft_putstr_fd("Putstr_fd test", fd);
	write(fd, "\n", 1);
//ft_putendl_fd
	printf("\n---- Putendl_fd tests ----\n");
	ft_putendl_fd("Arara", 1);
	write(1, "\n", 1);
	ft_putendl_fd("Putendl_fd test", fd);
	write(fd, "\n", 1);
//ft_putnbr_fd
	printf("\n---- Putnbr_fd tests ----\n");
	ft_putnbr_fd(42, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(-2147483648, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(-1234, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(0, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(2025, fd);
	write(fd, "\n", 1);
	ft_putnbr_fd(-42, fd);
	write(fd, "\n", 1);
	close(fd);
	return (0);
}
