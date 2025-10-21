/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjose-hi <fjose-hi@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 19:20:41 by fjose-hi          #+#    #+#             */
/*   Updated: 2025/10/07 20:06:54 by fjose-hi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	size;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	size = max - min;
	range = (int *)malloc(sizeof(int) * size);
	if (!range)
		return (NULL);
	while (i < size)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
/*
#include <stdio.h>

int	main(void)
{
	int	min = -17;
	int	max = 44;
	int	*arr;
	int	size = max - min;
	int	i = 0;

	arr = ft_range(min, max);
	if (!arr)
	{
		printf("Erro ao alocar memoria ou intervalo invalido.\n");
		return (1);
	}
	printf("Array gerado:\n");
	while (i < size)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
	free(arr);
	return (0);
}
*/
