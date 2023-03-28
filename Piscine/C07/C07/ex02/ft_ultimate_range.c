/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnijs <jnijs@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 19:00:58 by jnijs             #+#    #+#             */
/*   Updated: 2022/11/05 12:52:52 by jnijs            ###   ########.fr       */
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
	arr = malloc(4 * size);
	if (!arr)
		return (-1);
	while (nbr < max)
	{
		arr[i] = nbr;
		nbr = nbr + 1;
		i = i + 1;
	}
	*range = arr;
	return (size);
}
