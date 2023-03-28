/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 14:07:59 by brmajor           #+#    #+#             */
/*   Updated: 2022/11/03 17:35:47 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb >= 13)
		return (0);
	if (nb == 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

/*int	main(void)
{
	int	nb = 5;
	printf("%i", ft_recursive_factorial(nb));
}*/
