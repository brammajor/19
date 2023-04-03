/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 15:19:18 by brmajor           #+#    #+#             */
/*   Updated: 2023/04/03 16:50:26 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_node **head)
{
	t_node	*curr;

	curr = *head;
	if (is_sorted(head) == 0)
		return ;
	if (curr->content == get_biggest(head))
		rot(head, 'a');
	else if (curr->content == get_smallest(head))
		rerot(head, 'a');
	curr = curr->next;
	if (curr->content == get_smallest(head))
		swap(head, 'a');
}
