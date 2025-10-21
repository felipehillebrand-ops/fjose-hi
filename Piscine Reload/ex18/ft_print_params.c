/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjose-hi <fjose-hi@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 15:45:58 by fjose-hi          #+#    #+#             */
/*   Updated: 2025/10/08 16:10:34 by fjose-hi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
*/

void	ft_putchar(char c);

int	main(int ac, char *av[])
{
	int	i;
	int	len;

	i = 1;
	while (i < ac)
	{
		len = 0;
		while (av[i][len])
		{
			ft_putchar(av[i][len]);
			len++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}
