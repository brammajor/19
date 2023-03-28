/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:27:17 by brmajor           #+#    #+#             */
/*   Updated: 2022/11/07 15:27:19 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;
	int	nbr;

	i = 0;
	nbr = min;
	if (min >= max)
		return (0);
	arr = malloc(4 * (max - min));
	while (nbr < max)
	{
		arr[i] = nbr;
		nbr = nbr + 1;
		i = i + 1;
	}
	return (arr);
}
