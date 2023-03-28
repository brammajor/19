/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:18:57 by brmajor           #+#    #+#             */
/*   Updated: 2022/10/29 22:04:29 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
			return (0);
		i++;
	}
	return (1);
}
/*int main(void)
{
    char letters[] = "wwwwwwwwwwwwzzggggggggggggggefjHULIGLUG";

    printf("%i", ft_str_is_alpha(letters));
    return (0);
}*/
