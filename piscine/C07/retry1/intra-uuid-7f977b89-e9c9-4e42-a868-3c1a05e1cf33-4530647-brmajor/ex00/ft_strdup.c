/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnijs <jnijs@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 18:34:50 by jnijs             #+#    #+#             */
/*   Updated: 2022/10/29 18:54:52 by jnijs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i = i + 1;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i = i + 1;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		size;
	char	*str_new;

	size = ft_strlen(src) + 1;
	str_new = malloc(size);
	return (ft_strcpy(str_new, src));
}	
