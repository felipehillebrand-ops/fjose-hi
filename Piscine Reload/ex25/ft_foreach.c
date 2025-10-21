/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjose-hi <fjose-hi@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 12:30:07 by fjose-hi          #+#    #+#             */
/*   Updated: 2025/10/09 13:58:16 by fjose-hi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	c = (nb % 10) + '0';
	write(1, &c, 1);	
}
*/

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

/*
int	main(void)
{
	int	tab[] = {1, 2, 3, 4, 5};

	ft_foreach(tab, 5, &ft_putnbr);
	write(1, "\n", 1);
	return (0);
}
*/

/*
int	main(void)
{
	ft_putnbr(42);
	write(1, "\n", 1);
	ft_putnbr(-2147483648);
        write(1, "\n", 1);
	ft_putnbr(-1234);
        write(1, "\n", 1);
	ft_putnbr(0);
        write(1, "\n", 1);
	return (0);
}
*/
