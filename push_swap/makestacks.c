/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   temp.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 12:10:16 by brmajor           #+#    #+#             */
/*   Updated: 2023/03/30 14:36:00 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	addback(t_node **astack, int content)
{
	t_node	*newnode;

	if (!*astack)
		return ;
	newnode->content = content;
	newnode->next = NULL;
	while ((*astack)->next != NULL)
		*astack = (*astack)->next;
	(*astack)->next = newnode;
}

void	makestack(int ac, char **av)
{
	t_node	*astack;
	int		i;

	if (ac <= 1)
		return ;
	astack->content = ft_atoi(av[1]);
	astack->next = NULL;
	i = 2;
	while (i < ac)
	{
		addback(&astack, ft_atoi(av[i]));
		i++;
	}
}

void	printstack(t_node **astack)
{
	t_node	*curr;

	curr = *astack;
	while (curr->next != NULL)
	{
		ft_printf("%i ", curr->content);
		curr = curr->next;
	}
	ft_printf("%i\n", curr->content);
}

int	main()
{
	int	i = 0;
}
