/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 13:39:29 by brmajor           #+#    #+#             */
/*   Updated: 2022/11/07 15:22:38 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i = i + 1;
	return (i);
}

int	ft_strlcat2(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		i = i + 1;
		j = j + 1;
	}
	dest[i] = '\0';
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*str;
	int		len;

	i = 0;
	len = 0;
	while (i < size)
	{
		if (i > 0)
			len = len + ft_strlen(sep);
		len = len + ft_strlen(strs[i]);
		i = i + 1;
	}
	str = malloc(len + 1);
	i = 0;
	len = 0;
	while (i < size)
	{
		if (i > 0)
			len = len + ft_strlcat2(&str[len], sep);
		len = len + ft_strlcat2(&str[len], strs[i]);
		i = i + 1;
	}
	str[len] = '\0';
	return (str);
}
