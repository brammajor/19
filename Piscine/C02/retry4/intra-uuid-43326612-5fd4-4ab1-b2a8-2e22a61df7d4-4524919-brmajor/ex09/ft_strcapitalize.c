/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:22:04 by brmajor           #+#    #+#             */
/*   Updated: 2022/11/02 11:44:04 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	make_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
}

int	make_uppercase(char *str, int i)
{
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			return (i);
		i++;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			return (i);
		}
	}
	return (i);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	make_lowercase(str);
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}
	while (str[i])
	{
		if (str[i] < 'a' || str[i] > 'z')
			i = make_uppercase(str, i);
		i++;
	}
	return (str);
}
