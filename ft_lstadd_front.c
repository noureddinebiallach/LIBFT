/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiallac <nbiallac@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 23:38:09 by nbiallac          #+#    #+#             */
/*   Updated: 2026/11/06 03:13:41 by nbiallac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	(*new).next = *lst;
	*lst = new;
}

void	print(t_list **ptr)
{
	t_list	*copyptr;

	if (!ptr)
		return ;
	copyptr = *ptr;
	while (copyptr != NULL)
	{
		printf("%d\n", *(int *)(copyptr)->content);
		copyptr = (copyptr)->next;
	}
}
int	main(void)
{
	t_list *head;
	t_list *node1;
	int a = 3;
	t_list *node2;
	int b = 2;
	t_list *node3;
	int c = 7;
	t_list *node4;
	int f = 0;
	node1 = malloc(sizeof(t_list));
	node2 = malloc(sizeof(t_list));
	node3 = malloc(sizeof(t_list));
	node4 = malloc(sizeof(t_list));
	node1->content = &b;
	node2->content = &a;
	node3->content = &c;
	node4->content = &f;

	head = node1;
	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;
	print(&head);
	ft_lstadd_front(&head, node4);
	print(&head);
}