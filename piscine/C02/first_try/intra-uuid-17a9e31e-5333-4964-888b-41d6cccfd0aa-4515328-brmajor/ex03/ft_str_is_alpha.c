/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:55:09 by brmajor           #+#    #+#             */
/*   Updated: 2022/10/29 22:15:46 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 0 || str[i] > 9)
			return (0);
		i++;
	}
	return (1);
}

/*int main(void)
{
    char letters[] = "6456";
    printf("%i", ft_str_is_numeric(letters));
    return (0);
}*/
