/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errorcheck.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 15:19:19 by brmajor           #+#    #+#             */
/*   Updated: 2023/03/28 16:54:24 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_int(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (j < ac)
	{
		if (ft_atoi(av[i]) == 0)
			return (1);
		j++;
		i++;
	}
	return (0);
}

int	check_dup(int ac, char **av)
{
	int	i;
	int	j;
	int	num1;
	int	num2;

	i = 1;
	j = 2;
	while (av[i])
	{
		while (j < ac)
		{
			num1 = ft_atoi(av[i]);
			num2 = ft_atoi(av[j]);
			if (num1 == num2)
				return (1);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (0);
}

void	check_error(int ac, char **av)
{
	if (check_int(ac, av) || check_dup(ac, av))
	{
		write(1, "Error\n", 6);
		exit (1);
	}
}		
