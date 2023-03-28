/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 12:50:11 by brmajor           #+#    #+#             */
/*   Updated: 2022/10/30 15:29:12 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	if (nb < 0 || nb >= 13)
		return (0);
	if (nb > 1)
	{
		while (i <= nb)
		{
			j = (j * i);
			i++;
		}
		return (j);
	}
	return (1);
}

/*int	main(void)
{
	int	nb = 4;
	printf("%i", ft_iterative_factorial(nb));
}*/
