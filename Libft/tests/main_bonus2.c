/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjose-hi <fjose-hi@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 20:15:57 by fjose-hi          #+#    #+#             */
/*   Updated: 2025/10/22 20:43:15 by fjose-hi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft.h"

void	delnode(void *node)
{
	free(node);
}

void	ft_print_content(void *content)
{
	printf("%s\n", (char *)content);
}

void	ft_print_list(t_list *lst)
{
	while (lst)
	{
		printf("%s ", (char *)lst->content);
		lst = lst->next;
	}
	printf("\n");
}

void	*ft_dup_content(void *content)
{
	char	*str;

	str = ft_strdup((char *)content);
	*str = *str - 32;
	return (str);
}

int	main(void)
{
	t_list	*a;
	t_list	*b;
	t_list	*c;
	t_list	*d;
	t_list	*original;
	t_list	*mapped;

//ft_lstdelone
	printf("\n---- Lstdelone tests ----\n");
	a = ft_lstnew(ft_strdup("42"));
	if (!a)
	{
		printf("Falha na alocação do nó!\n");
		return (1);
	}
	printf("Conteúdo do nó antes de ft_lstdelone: %s\n", (char *)(a->content));
	ft_lstdelone(a, delnode);
	a = NULL;
	printf("Após ft_lstdelone: Nó deletado com sucesso!\n");
//ft_lstclear
	printf("\n---- Lstclear tests ----\n");
	a = ft_lstnew(ft_strdup("Primeiro"));
	b = ft_lstnew(ft_strdup("Segundo"));
	c = ft_lstnew(ft_strdup("Terceiro"));
	d = ft_lstnew(ft_strdup("Quarto"));
	a->next = b;
	b->next = c;
	c->next = d;
	d->next = NULL;
	printf("Conteúdo antes de ft_lstclear: %s %s %s %s \n", (char *)(a->content), (char *)(b->content), (char *)(c->content), (char *)(d->content));
	ft_lstclear(&a, delnode);
	a = NULL;
	b = NULL;
	c = NULL;
	d = NULL;
	printf("Após ft_lstclear: Nós deletados com sucesso!\n");
//ft_lstiter
	printf("\n---- Lstiter tests ----\n");
	a = ft_lstnew(ft_strdup("Primeiro"));
	b = ft_lstnew(ft_strdup("Segundo"));
	c = ft_lstnew(ft_strdup("Terceiro"));
	d = ft_lstnew(ft_strdup("Quarto"));
	a->next = b;
	b->next = c;
	c->next = d;
	d->next = NULL;
	ft_lstiter(a, ft_print_content);
	ft_lstclear(&a, free);
//ft_lstmap
	printf("\n---- Lstmap tests ----\n");
	original = ft_lstnew(ft_strdup("primeiro"));
	if (!original)
		return (1);
	ft_lstadd_back(&original, ft_lstnew(ft_strdup("segundo")));
	ft_lstadd_back(&original, ft_lstnew(ft_strdup("terceiro")));
	ft_lstadd_back(&original, ft_lstnew(ft_strdup("quarto")));
	printf("Original: ");
	ft_print_list(original);
	mapped = ft_lstmap(original, ft_dup_content, delnode);
	printf("Mapped: ");
	ft_print_list(mapped);
	ft_lstclear(&original, delnode);
	ft_lstclear(&mapped, delnode);
	return (0);
}
