/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:57:48 by brmajor           #+#    #+#             */
/*   Updated: 2022/11/08 21:29:19 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *str, int size)
{
	int		i;
	char	*str2;

	i = 0;
	str2 = 0;
	str2 = malloc(size + 1);
	while (str[i])
	{
		str2[i] = str[i];
		i++;
	}
	str2[i] = 0;
	return (str2);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*data;

	i = 0;
	data = malloc(sizeof(t_stock_str) * ac + 1);
	if (data == 0)
		return (0);
	while (i < ac)
	{
		data[i].size = ft_strlen(av[i]);
		data[i].str = av[i];
		data[i].copy = ft_strcpy(av[i], data[i].size);
		i++;
	}
	data[i].size = 0;
	data[i].str = 0;
	data[i].copy = 0;
	return (data);
}
