/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 14:45:21 by brmajor           #+#    #+#             */
/*   Updated: 2023/04/03 18:01:04 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main (int ac, char **av)
{
	t_node *astack;

	check_error(ac, av);
	astack = makestack(ac, av);
	ft_printf("%d\n", is_sorted(&astack));
	printstack(&astack);
	sort_size(&astack);
	printstack(&astack);
}
