/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 16:49:09 by brmajor           #+#    #+#             */
/*   Updated: 2023/04/04 17:32:47 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rot_min(t_node **astack, t_node **bstack)
{
	t_node	*curr;
	int	min;

	curr = *astack;
	min = get_min(astack);
	while (curr->content != min)
	{
		rot(astack, 'a');
		curr = *astack;
	}
	pb(astack, bstack);
}

void	rerot_min(t_node **astack, t_node **bstack)
{
	t_node	*curr;
	int	min;

	curr = *astack;
	min = get_min(astack);
	while (curr->content != min)
	{
		rerot(astack, 'a');
		curr = *astack;
	}
	pb(astack, bstack);
}

void	rot_max(t_node **astack, t_node **bstack)
{
	t_node	*curr;
	int	max;

	curr = *astack;
	max = get_max(astack);
	while (curr->content != max)
	{
		rot(astack, 'a');
		curr = *astack;
	}
	pb(astack, bstack);
}


void	rerot_max(t_node **astack, t_node **bstack)
{
	t_node	*curr;
	int	max;

	curr = *astack;
	max = get_max(astack);
	while (curr->content != max)
	{
		rerot(astack, 'a');
		curr = *astack;
	}
	pb(astack, bstack);
}

void	next_step(t_node **astack, t_node **bstack)
{
	int	path;

	path = calc_path(astack);
	if (path == 1)
		rot_min(astack, bstack);
	if (path == 2)
		rerot_min(astack, bstack);
	if (path == 3)
		rot_max(astack, bstack);
	if (path == 4)
		rerot_max(astack, bstack);
}
