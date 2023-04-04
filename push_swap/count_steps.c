/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_steps.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 14:32:25 by brmajor           #+#    #+#             */
/*   Updated: 2023/04/04 16:27:25 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	steps_min(t_node **astack)
{
	t_node	*curr;
	int		minpos;

	minpos = 0;
	curr = *astack;
	while (curr->next != NULL)
	{
		if (curr->content == get_min(astack))
			break ;
		curr = curr->next;
		minpos++;
	}
	return (minpos);
}

int	steps_max(t_node **astack)
{
	t_node	*curr;
	int		maxpos;

	maxpos = 0;
	curr = *astack;
	while (curr->next != NULL)
	{
		if (curr->content == get_max(astack))
			break ;
		curr = curr->next;
		maxpos++;
	}
	return (maxpos);
}

int	rot_or_rerot(int steps, int size)
{
	if (steps >= size / 2)
		return (1);
	else
		return (0);
}

int	get_path(int steps_min, int steps_max,
		int trigger_min, int trigger_max)
{
	if (steps_min <= steps_max)
	{
		if (trigger_min == 0)
//		return 1 to rotate for min
			return (1);
		else
//		return 2 to reverse rotate for min
			return (2);
	}
	else if (steps_max < steps_min)
	{
		if (trigger_max == 0)
//		return 3 to rotate for max
			return (3);
		else
//		return 4 to reverse rotate for max
			return (4);
	}
	return (0);
}

int	calc_path(t_node **astack)
{
	int		size;
	int		stepsmin;
	int		stepsmax;
	int		trigger_min;
	int		trigger_max;

	size = size_count(astack);
	stepsmin = steps_min(astack);
	stepsmax = steps_max(astack);
	trigger_min = 0;
	trigger_max = 0;
	if (rot_or_rerot(stepsmin, size))
	{
		stepsmin = size - stepsmin;
		trigger_min++;
	}
	if (rot_or_rerot(stepsmax, size))
	{
		stepsmax = size - stepsmax;
		trigger_max++;
	}
	return (get_path(stepsmin, stepsmax, trigger_min, trigger_max));
}
