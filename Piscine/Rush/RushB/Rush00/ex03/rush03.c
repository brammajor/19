/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 11:33:59 by brmajor           #+#    #+#             */
/*   Updated: 2022/10/23 16:38:54 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	width_1(int x, int y, char a, char c)
{
	char	backspace;
	char	b;

	backspace = '\n';
	b = 'B';
	ft_putchar(a);
	while (x > 2)
	{
		ft_putchar(b);
		x--;
	}
	if (x == 2)
	{
		ft_putchar(c);
	}
	ft_putchar(backspace);
}

void	width_2(int x, int y, char space)
{
	char	backspace;
	char	b;

	backspace = '\n';
	b = 'B';
	ft_putchar(b);
	while (x > 2)
	{
		ft_putchar(space);
		x--;
	}
	if (x == 2)
	{
		ft_putchar(b);
	}
	ft_putchar(backspace);
}

void	rush(int x, int y)
{
	char	a;
	char	c;
	char	space;

	a = 'A';
	c = 'C';
	space = ' ';
	if (x <= 0 || y <= 0)
		return ;
	width_1(x, y, a, c);
	while (y > 2)
	{
		width_2(x, y, space);
		y--;
	}
	if (y >= 2)
	{
		width_1(x, y, a, c);
	}
}
