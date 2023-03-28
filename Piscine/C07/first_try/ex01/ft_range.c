/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 09:55:24 by brmajor           #+#    #+#             */
/*   Updated: 2022/11/03 10:28:42 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;
	int	j;
	int	size;

	size = (max - min);
	array = malloc(size * 4);
	i = min;
	j = 0;
	if (min >= max)
		return (NULL);
	while (i < max)
	{
		array[j] = i;
		i++;
		j++;
	}
	return (array);
}
