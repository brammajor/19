/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnijs <jnijs@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 13:21:08 by jnijs             #+#    #+#             */
/*   Updated: 2022/11/07 13:32:46 by jnijs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// step 0: whitespaces
// step 1: + or - sign
int	check_sign_start(char *str)
{
	int	i;
	int	step;
	int	sign;

	i = 0;
	step = 0;
	sign = 1;
	while (str[i])
	{
		if (step == 0 && str[i] != ' ' && str[i] != '\f' && str[i] != '\n')
		{
			if (str[i] != '\r' && str[i] != '\t' && str[i] != '\v')
				step = 1;
		}
		if (step == 1 && str[i] == '+')
			;
		else if (step == 1 && str[i] == '-')
			sign = -1 * sign;
		else if (step == 1)
			step = 2;
		if (step == 2)
			break ;
		i = i + 1;
	}
	return (sign * i);
}

int	check_base(	char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j = j + 1;
		}
		i = i + 1;
	}
	if (i < 2)
		return (0);
	else
		return (i);
}

void	assign_memory(int nbr, char *base, char **str, char **str2)
{
	int	mem_size;
	int	base_size;

	mem_size = 1;
	base_size = check_base(base);
	while (nbr)
	{
		mem_size = mem_size + 1;
		nbr = nbr / base_size;
	}
	*str = malloc(mem_size + 1);
	*str2 = malloc(mem_size + 2);
}

void	reverse_str(char *dest, char *src, int start_dest, int end_src)
{
	while (end_src >= 0)
	{
		dest[start_dest] = src[end_src];
		start_dest = start_dest + 1;
		end_src = end_src - 1;
	}
	dest[start_dest] = '\0';
}
