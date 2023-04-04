/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 13:40:36 by brmajor           #+#    #+#             */
/*   Updated: 2023/04/04 15:36:43 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_node **head)
{
	t_node	*curr;

	curr = *head;
	while (curr->next != NULL)
	{
		if (curr->content > curr->next->content)
			return (1);
		curr = curr->next;
	}
	return (0);
}

int	get_max(t_node **head)
{
	t_node	*curr;
	int		curr_num;
	int		biggest;

	curr = *head;
	biggest = curr->content;
	while (curr->next != NULL)
	{
		curr = curr->next;
		curr_num = curr->content;
		if (curr_num > biggest)
			biggest = curr_num;
	}
	return (biggest);
}

int	get_min(t_node **head)
{
	t_node	*curr;
	int		curr_num;
	int		smallest;

	curr = *head;
	smallest = curr->content;
	while (curr->next != NULL)
	{
		curr = curr->next;
		curr_num = curr->content;
		if (curr_num < smallest)
			smallest = curr_num;
	}
	return (smallest);
}
