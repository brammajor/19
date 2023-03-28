/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 13:39:29 by brmajor           #+#    #+#             */
/*   Updated: 2022/11/07 12:18:33 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	str_cat(char *dest, char *src)
{
	int	i;
	int	j;

	j = 0;
	i = str_len(dest);
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (*dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*str;

	i = 0;
	len = 0;
	if (size == 0)
	{
		str = malloc(1);
		return (str);
	}
	while (strs[++i])
	{
		len = len + str_len(strs[i]);
	}
	len = len + (str_len(sep) * size - 2);
	str = malloc(len + 1);
	i = 0;
	while (strs[++i])
	{
		*str = str_cat(str, strs[i]);
		if (i < size)
			*str = str_cat(str, sep);
	}
	return (str);
}
/*
#include<stdio.h>
int	main(int ac, char *av[])
{
	char *sep = "!-! !";
	printf("%s", ft_strjoin(ac - 1, av, sep));
}*/
