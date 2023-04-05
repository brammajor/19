/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 15:19:18 by brmajor           #+#    #+#             */
/*   Updated: 2023/04/05 12:12:14 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_min_max(t_node **astack, t_node **bstack, int path)
{
	t_node	*curr;

	curr = *astack;
	if (path == 1 || path == 2)
	{
		while (curr->content != get_min(astack))
		{
			rot(astack, 'a');
			curr = *astack;
		}
		pb(astack, bstack);
	}
	if (path == 3 || path == 4)
	{
		while (curr->content != get_max(astack))
		{
			rot(astack, 'a');
			curr = *astack;
		}
		pb(astack, bstack);
	}
}

void	sort_2(t_node **head)
{
	rot(head, 'a');
}

void	sort_3(t_node **head)
{
	t_node	*curr;

	curr = *head;
	if (curr->content == get_max(head))
	{
		rot(head, 'a');
		if (is_sorted(head) != 0)
			swap(head, 'a');
	}
	else if (curr->content == get_min(head))
	{
		rerot(head, 'a');
		if (is_sorted(head) != 0)
			swap(head, 'a');
	}
	else if (curr->next->content == get_max(head))
		rerot(head, 'a');
	else if (curr->next->content == get_min(head))
		swap(head, 'a');
}

void	sort_4(t_node **astack, t_node **bstack)
{
	t_node	*curr;

	next_step(astack, bstack);
	sort_3(astack);
	pa(astack, bstack);
	curr = *astack;
	if (curr->content == get_max(astack))
		rot(astack, 'a');
}

void	sort_5(t_node **astack, t_node **bstack)
{
	t_node	*curr;
	int	path;

	path = next_step(astack, bstack);
	push_min_max(astack, bstack, path);
	sort_3(astack);
	curr = *bstack;
	if (curr->content == get_min(bstack))
		rot(bstack, 'b');
	pa(astack, bstack);
	pa(astack, bstack);
	while (1)
	{
		if (is_sorted(astack) == 0)
			break ;
		rot(astack, 'a');
	}
}
