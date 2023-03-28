/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnijs <jnijs@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 19:00:58 by jnijs             #+#    #+#             */
/*   Updated: 2022/10/29 20:18:21 by jnijs            ###   ########.fr       */
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
