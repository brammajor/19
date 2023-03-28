/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 10:29:40 by brmajor           #+#    #+#             */
/*   Updated: 2022/11/04 08:39:21 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	j;

	if (min >= max)
	{
		
		return (0);
	}
	if (!(*range = malloc((max - min) * sizeof (int))))
		return (-1);
	i = min;
	j = 0;
	while (i < max)
	{
		(*range)[j] = i;
		i++;
		j++;
	}
	return (j);
}
/*
#include<stdio.h>
int		main(void)
{
	int		*range;

	printf("%d", ft_ultimate_range(&range, -5, 50));
}*/
