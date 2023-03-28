/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 10:56:19 by brmajor           #+#    #+#             */
/*   Updated: 2022/10/31 09:35:14 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			while (to_find[j])
			{
				if (str[i] != to_find[j])
					break ;
				i++;
				j++;
			}
			if (to_find[j] == '\0')
				return (&str[(i - j)]);
		}	
		i++;
		j = 0;
	}
	return ("\0");
}
/*
int	main(void)
{
	char	str[] = "6k9-z kkkkkakapipi lne346fwf~~  ";
	char	to_find[] = "kakapipi";
	printf("%s", ft_strstr(str, to_find));
}*/
