/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:42:17 by brmajor           #+#    #+#             */
/*   Updated: 2022/10/24 13:51:49 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_alphabet(void)

{
	char	letter;

	letter = 'a';
	while (letter <= 'z')
	{
		write(1, &letter, 1);
		letter++;
	}
}
