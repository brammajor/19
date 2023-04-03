/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 13:40:36 by brmajor           #+#    #+#             */
/*   Updated: 2023/04/03 18:19:25 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_node **head)
{
	t_node	*curr;
	int	prev_value;

	curr = *head;
	prev_value = curr->content;
	curr = curr->next;
	while (curr->next != NULL)
	{
		if (curr->content < prev_value)
			return (1);
		prev_value = curr->content;
		curr = curr->next;
	}
	return (0);
}

int	get_biggest(t_node **head)
{
	t_node	*curr;
	int	curr_num;
	int	biggest;

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

int	get_smallest(t_node **head)
{
	t_node	*curr;
	int	curr_num;
	int	smallest;

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
