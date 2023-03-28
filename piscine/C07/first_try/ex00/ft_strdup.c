/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 10:19:47 by brmajor           #+#    #+#             */
/*   Updated: 2022/11/02 18:37:15 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	str_len(char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*str;
	
	str = (char* )malloc(str_len(src) + 1);
	str = src;
	return (str);
}
/*
#include<stdio.h>

int	main()
{
	char	src[] = "12345";

	printf("%s", ft_strdup(src));
}*/
