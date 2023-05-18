/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_med.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:19:50 by brmajor           #+#    #+#             */
/*   Updated: 2023/05/18 15:53:32 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_100(t_node **astack, t_node **bstack)
{
	int	size;
	int	divider;

	if (!is_all_sorted(astack, bstack))
		return ;
	size = size_count(astack);
	if (size > 50)
		divider = 4;
	else
		divider = 2;
	while (
}

int	rot_or_rerot(t_node **astack, t_node **bstack)
{
	int	stack_size;
	int	num_of_ops;

	stack_size = size_count(astack);
	num_of_ops = 0;
	while ((*astack)->content < (*bstack)->content)
	{
		(*astack) = (*astack)->next;
		num_of_ops++;
	}
	if (num_of_ops > stack_size / 2)
		return (1);
	else
		return (0);
}

int	count_steps(t_node **astack, t_node **bstack)
{
	int	stack_size;
	int	num_of_ops;

	stack_size = size_count(astack);
	num_of_ops = 0;
	while ((*astack)->content < (*bstack)->content)
	{
		(*astack) = (*astack)->next;
		num_of_ops++;
	}
	if (num_of_ops > stack_size / 2)
		num_of_ops = stack_size - num_of_ops;
	return (num_of_ops);
}

