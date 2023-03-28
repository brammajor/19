/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 10:13:29 by brmajor           #+#    #+#             */
/*   Updated: 2022/11/01 11:28:42 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] && i < nb)
	{
		i++;
	}
	while (src[j] && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}

/*#include <stdio.h>

int	main(void)
{
	unsigned int nb = 6;

	char	src[] = " bbbbbbbbbbbb";
	char	dest[40] = "aaaaa";
	ft_strncat(dest, src, nb);
	printf("%s", dest);
}*/
