/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 13:32:55 by brmajor           #+#    #+#             */
/*   Updated: 2023/04/03 16:55:13 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_node **head, char x)
{
	t_node	*newhead;
	t_node	*node2;

	if (*head == NULL || (*head)->next == NULL)
		return ;
	node2 = *head;
	newhead = node2->next;
	node2->next = newhead->next;
	newhead->next = node2;
	*head = newhead;
	if (x == 's')
		return ;
	ft_printf("s%c\n", x);
}

void	pa(t_node **astack, t_node **bstack)
{
	t_node	*newhead;

	if (*bstack == NULL)
		return ;
	newhead = *bstack;
	*bstack = newhead->next;
	newhead->next = *astack;
	*astack = newhead;
	ft_printf("pa\n");
}

void	pb(t_node **astack, t_node **bstack)
{
	t_node	*newhead;

	if (*astack == NULL)
		return ;
	newhead = *astack;
	*astack = newhead->next;
	newhead->next = *bstack;
	*bstack = newhead;
	ft_printf("pb\n");
}

void	rot(t_node **head, char x)
{
	t_node	*last;

	last = *head;
	while ((*head)->next != NULL)
		*head = (*head)->next;
	last->next = NULL;
	(*head)->next = last;
	if (x == 'r')
		return ;
	ft_printf("p%c\n", x);
}

void	rerot(t_node **head, char x)
{
	t_node	*curr;
	t_node	*prev;

	curr = *head;
	while (curr->next != NULL)
	{
		prev = curr;
		curr = curr->next;
	curr->next = *head;
	*head = curr;
	prev->next = NULL;
	if (x == 'r')
		return ;
	ft_printf("rr%c\n", x);
	}
}
