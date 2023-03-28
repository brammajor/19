/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnijs <jnijs@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 13:21:08 by jnijs             #+#    #+#             */
/*   Updated: 2022/11/07 13:48:02 by jnijs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		check_sign_start(char *str);
int		check_base(	char *base);
void	assign_memory(int nbr, char *base, char **str, char **str2);
void	reverse_str(char *dest, char *src, int start_dest, int end_src);

char	*ft_putnbr_base(int nbr, char *base)
{
	int		base_size;
	char	*str;
	char	*str2;
	int		i;
	int		j;

	j = 0;
	i = 0;
	assign_memory(nbr, base, &str, &str2);
	base_size = check_base(base);
	if (nbr < 0)
	{
		nbr = -1 * nbr;
		str2[j] = '-';
		j = j + 1;
	}
	while (nbr)
	{
		str[i] = base[nbr % base_size];
		nbr = nbr / base_size;
		i = i + 1;
	}
	i = i - 1;
	reverse_str(str2, str, j, i);
	return (str2);
}

int	str_to_dec(char *nbr, char *base_from)
{
	int	i;
	int	j;
	int	result;
	int	base_len;

	i = 0;
	result = 0;
	base_len = check_base(base_from);
	while (nbr[i])
	{
		j = 0;
		while (j < base_len)
		{
			if (base_from[j] == nbr[i])
				break ;
			j = j + 1;
		}
		if (j == base_len)
			return (result);
		result = base_len * result + j;
		i = i + 1;
	}
	return (result);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		sign;
	int		startpos;
	int		decimal;
	char	*str;

	if (!check_base(base_from) || !check_base(base_to))
		return (0);
	sign = check_sign_start(nbr);
	if (sign < 0)
		startpos = -1 * sign;
	else
		startpos = sign;
	decimal = str_to_dec(&nbr[startpos], base_from);
	if (sign < 0)
		decimal = -1 * decimal;
	if (decimal == 0)
	{
		str = malloc(2);
		str[0] = '0';
		return (str);
	}
	else
		return (ft_putnbr_base(decimal, base_to));
}
