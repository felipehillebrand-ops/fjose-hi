/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjose-hi <fjose-hi@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 12:36:17 by fjose-hi          #+#    #+#             */
/*   Updated: 2025/10/07 13:05:46 by fjose-hi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*
#include <stdio.h>

int     main(void)
{
 	char	*t;
	int	c;

	t = "Felipe eh foda";
	c = ft_strlen(t);
	printf("%d\n", c);
        return (0);
}
*/
