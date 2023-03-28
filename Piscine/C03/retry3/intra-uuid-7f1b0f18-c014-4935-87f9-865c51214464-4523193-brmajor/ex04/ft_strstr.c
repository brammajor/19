/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 10:56:19 by brmajor           #+#    #+#             */
/*   Updated: 2022/11/02 11:34:52 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check(char *str, char *to_find, int i)
{
	int	j;

	j = 0;
	while (to_find[j])
	{
		if (str[i] != to_find[j])
			return ('\0');
		i++;
		j++;
	}
	if (to_find[j] == '\0')
		return (str[(i - j)]);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[0])
			if (return (check(str, to_find, i)) != '\0';
					return (check(str, to_find, i);
		i++;
	}
	return ("\0");
}
