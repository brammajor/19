/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 14:45:21 by brmajor           #+#    #+#             */
/*   Updated: 2023/04/04 17:51:06 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_node	*astack;
	t_node	*bstack;

	check_error(ac, av);
	astack = makestack(ac, av);
	bstack = NULL;
	if (is_sorted(&astack) == 0)
	{
		printstack(&astack);
		return (0);
	}
	sort_size(&astack, &bstack);
	printstack(&astack);
}
