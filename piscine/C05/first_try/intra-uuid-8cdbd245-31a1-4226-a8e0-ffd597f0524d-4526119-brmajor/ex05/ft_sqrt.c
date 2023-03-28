/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 18:58:19 by brmajor           #+#    #+#             */
/*   Updated: 2022/10/31 11:51:37 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	solver(int nb, int i)
{
	if (nb <= 0 || nb > 2147395600)
		return (0);
	if ((i * i) == nb)
		return (i);
	if ((i * i) < nb)
		return (solver(nb, i + 1));
	return (0);
}

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	return (solver(nb, 0));
}
/*
int	main(void)
{
	printf("%i", ft_sqrt(2147395601));
}*/
