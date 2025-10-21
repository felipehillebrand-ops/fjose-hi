/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjose-hi <fjose-hi@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 17:29:32 by fjose-hi          #+#    #+#             */
/*   Updated: 2025/10/08 17:52:21 by fjose-hi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
#include <stdio.h>

int     main(void)
{
        int     n1;
        int     n2;
        int     n3;
        int     n4;
        int     n5;

        n1 = 0;
        n2 = -1;
        n3 = 1;
        n4 = 3;
        n5 = 5;
        printf("%d\n", ft_recursive_factorial(n1));
        printf("%d\n", ft_recursive_factorial(n2));
        printf("%d\n", ft_recursive_factorial(n3));
        printf("%d\n", ft_recursive_factorial(n4));
        printf("%d\n", ft_recursive_factorial(n5));
}
*/
