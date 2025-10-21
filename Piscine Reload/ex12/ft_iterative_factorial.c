/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjose-hi <fjose-hi@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 16:29:11 by fjose-hi          #+#    #+#             */
/*   Updated: 2025/10/08 17:47:15 by fjose-hi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	result = 1;
	i = 1;
	if (nb < 0 || nb > 12)
		return (0);
	while (i <= nb)
	{
		result = result * i;
		i++;
	}
	return (result);
}
/*
#include <stdio.h>

int	main(void) 
{
	int	n1;
	int	n2;
	int	n3;
	int	n4;
	int	n5;

	n1 = -23;
	n2 = 28;
	n3 = 0;
	n4 = 1;
	n5 = 2;
	printf("%d\n", ft_iterative_factorial(n1));
	printf("%d\n", ft_iterative_factorial(n2));
	printf("%d\n", ft_iterative_factorial(n3));
	printf("%d\n", ft_iterative_factorial(n4));
	printf("%d\n", ft_iterative_factorial(n5));
}
*/
