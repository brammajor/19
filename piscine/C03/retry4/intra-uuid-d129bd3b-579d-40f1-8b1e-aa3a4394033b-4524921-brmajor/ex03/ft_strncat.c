/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 10:13:29 by brmajor           #+#    #+#             */
/*   Updated: 2022/11/03 09:44:41 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	str_len(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	size;
	unsigned int	i;

	size = str_len(dest);
	i = 0;
	while (src[i] && i < nb)
	{
		dest[size + i] = src[i];
		i++;
	}
	dest[size + i] = '\0';
	return (dest);
}
/*
#include<stdio.h>
int	main()
{
	char dest[] = "123456789";
	char src[] = "abcdefghijkl";
	printf("%s", ft_strncat(dest, src, 3));
}*/
