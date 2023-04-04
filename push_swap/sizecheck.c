/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sizecheck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 13:21:25 by brmajor           #+#    #+#             */
/*   Updated: 2023/04/04 17:52:01 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	size_count(t_node **head)
{
	int		size;
	t_node	*curr;

	curr = *head;
	size = 1;
	while (curr->next != NULL)
	{
		curr = curr->next;
		size++;
	}
	return (size);
}

void	sort_size(t_node **astack, t_node **bstack)
{
	int	size;

	(void)bstack;
	size = size_count(astack);
	if (size == 2)
		rot(astack, 'a');
	else if (size == 3)
		sort_3(astack);
	else if (size == 4)
		sort_4(astack, bstack);
	else if (size == 5)
		sort_5(astack, bstack);
//	else if (size > 4 && size <= 100)
//		sort_100(head);
//	else if (size > 100)
//		sort_500(head);
}
