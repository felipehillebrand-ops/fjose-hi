/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjose-hi <fjose-hi@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 20:10:16 by fjose-hi          #+#    #+#             */
/*   Updated: 2025/10/08 16:02:16 by fjose-hi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h>

void    ft_putchar(char c)
{
        write(1, &c, 1);
}
*/

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char	c;

	c = '0';
	while (c <= '9')
	{
		ft_putchar(c);
		c++;
	}
}

/*
int     main(void)
{       
	ft_print_numbers();
        ft_putchar('\n');
        return (0);
}
*/
