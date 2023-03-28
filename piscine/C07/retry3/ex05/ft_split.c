/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:29:12 by brmajor           #+#    #+#             */
/*   Updated: 2022/11/07 15:29:13 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i = i + 1;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i = i + 1;
	}
	return (dest);
}

int	char_in_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i = i + 1;
	}
	return (0);
}

int	number_of_strings(char *str, char *charset)
{
	int	i;
	int	len;
	int	count;

	i = 0;
	len = 0;
	count = 0;
	while (str[i])
	{
		if (char_in_charset(str[i], charset))
		{
			if (len > 0)
				count = count + 1;
			len = 0;
		}
		else
			len = len + 1;
		i = i + 1;
	}
	if (len > 0)
		count = count + 1;
	return (count);
}

int	append_str(char **arr, int index, char *str, int *len)
{
	char	*strptr;

	if (*len > 0)
	{
		strptr = malloc(*len + 1);
		arr[index] = ft_strncpy(strptr, str, *len);
		index = index + 1;
		*len = 0;
	}
	return (index);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		len;
	char	**arr;

	i = 0;
	j = 0;
	len = number_of_strings(str, charset);
	arr = malloc(8 * (len + 1));
	len = 0;
	while (str[i])
	{
		if (char_in_charset(str[i], charset))
		{
			j = append_str(arr, j, &str[i - len], &len);
		}
		else
			len = len + 1;
		i = i + 1;
	}
	j = append_str(arr, j, &str[i - len], &len);
	arr[j] = 0;
	return (arr);
}
