/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 09:49:19 by brmajor           #+#    #+#             */
/*   Updated: 2022/10/30 10:44:57 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
	{
		if (dest[i] == '\0')
			break ;
		i++;
	}
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char src[] = " kaka en pipi";
	char dest[40] = "Mark likes";
	ft_strcat(dest, src);
	printf("%s", dest);
}*/
