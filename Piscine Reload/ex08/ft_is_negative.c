/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjose-hi <fjose-hi@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 20:17:46 by fjose-hi          #+#    #+#             */
/*   Updated: 2025/10/08 16:04:31 by fjose-hi         ###   ########.fr       */
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

void	ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar('N');
	else
		ft_putchar('P');
}
/*
int     main(void)
{       
	ft_is_negative(5);
        ft_putchar('\n');
        return (0);
} 
*/
