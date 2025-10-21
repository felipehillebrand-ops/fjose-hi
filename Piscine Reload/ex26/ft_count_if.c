/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjose-hi <fjose-hi@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 17:33:07 by fjose-hi          #+#    #+#             */
/*   Updated: 2025/10/09 20:42:49 by fjose-hi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char *))
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]) == 1)
			count++;
		i++;
	}
	return (count);
}
/*
int	length_greater_than_5(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	if (len > 5)
		return (1);
	return (0);
}

#include <stdio.h>

int	main(void)
{
	char *array[] = {"Apple", "Banana", "Avocado", "Cherry", "Kiwi", 0};
	int result = ft_count_if(array, length_greater_than_5);

	printf("Número de strings com mais de 5 caracteres: %d\n", result);
	return (0);
}
*/
