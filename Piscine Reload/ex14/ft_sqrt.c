/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjose-hi <fjose-hi@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 17:44:32 by fjose-hi          #+#    #+#             */
/*   Updated: 2025/10/07 18:28:30 by fjose-hi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	i = 0;
	while (i * i <= nb && i <= 46340)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
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

        n1 = -9;
        n2 = 0;
        n3 = 9;
        n4 = 16;
        n5 = 37;
        printf("%d\n", ft_sqrt(n1));
        printf("%d\n", ft_sqrt(n2));
        printf("%d\n", ft_sqrt(n3));
        printf("%d\n", ft_sqrt(n4));
        printf("%d\n", ft_sqrt(n5));
}*/
