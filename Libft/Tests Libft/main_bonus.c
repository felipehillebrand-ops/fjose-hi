/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjose-hi <fjose-hi@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 19:46:12 by fjose-hi          #+#    #+#             */
/*   Updated: 2025/10/22 20:30:06 by fjose-hi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft.h"

int	main(void)
{
	t_list	a;
	t_list	b;
	t_list	c;
	t_list	d;
	t_list	*current;
	t_list	*a2;
	t_list	*b2;
	t_list	*c2;
	t_list	*d2;

//ft_lstnew
	printf("\n---- Lstnew tests ----\n");
	a.next = &b;
	b.next = &c;
	c.next = &d;
	d.next = NULL;
	a.content = "Felipe";
	b.content = "Jose";
	c.content = "Hillebrand";
	d.content = "Ferreira";
	current = &a;
	while (current != NULL)
	{
		printf("%s ", (char *)current->content);
		current = current->next;
	}
	printf("\n");
//ft_lstadd_front
	printf("\n---- Lstadd_front tests ----\n");
	a.next = &b;
	b.next = &c;
	c.next = NULL;
	d.next = NULL;
	a.content = "Felipe";
	b.content = "Jose";
	c.content = "Hillebrand";
	d.content = "Ferreira";
	current = &a;
	ft_lstadd_front(&current, &d);
	while (current != NULL)
	{
		printf("%s ", (char *)current->content);
		current = current->next;
	}
	printf("\n");
//ft_lstsize
	printf("\n---- Lstsize tests ----\n");
	a2 = ft_lstnew("Primeiro");
	b2 = ft_lstnew("Segundo");
	c2 = ft_lstnew("Terceiro");
	d2 = ft_lstnew("Quarto");
	a2->next = b2;
	b2->next = c2;
	c2->next = d2;
	d2->next = NULL;
	printf("Tamanho da lista: %d\n", ft_lstsize(a2));
	free(d2);
	free(c2);
	free(b2);
	free(a2);
//ft_lstlast
	printf("\n---- Lstlast tests ----\n");
	a2 = ft_lstnew("Primeiro");
	b2 = ft_lstnew("Segundo");
	c2 = ft_lstnew("Terceiro");
	d2 = ft_lstnew("Quarto");
	a2->next = b2;
	b2->next = c2;
	c2->next = d2;
	d2->next = NULL;
	printf("Ultimo nó: %s\n", (char *)(ft_lstlast(a2))->content);
	free(d2);
	free(c2);
	free(b2);
	free(a2);
//ft_lstadd_back
	printf("\n---- Lstadd_back tests ----\n");
	a.next = &b;
	b.next = &c;
	c.next = NULL;
	d.next = NULL;
	a.content = "Felipe";
	b.content = "Jose";
	c.content = "Hillebrand";
	d.content = "Ferreira";
	current = &a;
	ft_lstadd_back(&current, &d);
	while (current != NULL)
	{
		printf("%s ", (char *)current->content);
		current = current->next;
	}
	printf("\n");
	return (0);
}
