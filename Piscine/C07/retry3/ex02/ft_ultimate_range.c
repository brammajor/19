/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:28:01 by brmajor           #+#    #+#             */
/*   Updated: 2022/11/08 17:57:13 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int	i;
	int	nbr;
	int	size;

	i = 0;
	nbr = min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = (max - min);
	arr = malloc(sizeof(int) * size);
	if (!arr)
		return (-1);
	while (nbr < max)
	{
		arr[i] = nbr;
		nbr++;
		i++;
	}
	*range = arr;
	return (size);
}
