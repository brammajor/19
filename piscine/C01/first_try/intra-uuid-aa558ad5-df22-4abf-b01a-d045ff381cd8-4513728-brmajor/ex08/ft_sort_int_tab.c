/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:25:58 by brmajor           #+#    #+#             */
/*   Updated: 2022/10/26 14:34:27 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int		tmp;
	int		i;

	i = 0;
	while (i < size)
	{
		while (tab[i])
		{
			if (tab[i] > tab[i + 1])
			{
				tmp = tab[i + 1];
				tab[i + 1] = tab[i];
				tab[i] = tmp;
				i++;
			}
		}
		i = 0;
		size = size - 1;
	}
}
