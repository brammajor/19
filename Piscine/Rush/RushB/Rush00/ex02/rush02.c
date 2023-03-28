/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 11:12:19 by brmajor           #+#    #+#             */
/*   Updated: 2022/10/23 16:42:58 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	width_1(int x, int y, char a)
{
	char	b;
	char	d;
	int		e;

	b = 'B';
	d = '\n';
	e = x - 2;
	ft_putchar(a);
	while (e > 0)
	{	
		ft_putchar(b);
		e--;
	}
	if (e == 0)
	{
		ft_putchar(a);
	}
	ft_putchar(d);
}

void	width_2(int x, int y, char c)
{
	char	b;
	char	d;
	int		e;

	b = 'B';
	d = '\n';
	e = x - 2;
	ft_putchar(c);
	while (e > 0)
	{
		ft_putchar(b);
		e--;
	}
	if (e == 0)
	{
		ft_putchar(c);
	}
	ft_putchar(d);
}

void	width_3(int x, int y, char g)
{
	char	b;
	char	d;
	int		e;

	b = 'B';
	d = '\n';
	e = x - 2;
	ft_putchar(b);
	while (e > 0)
	{
		ft_putchar(g);
		e--;
	}
	if (e == 0)
	{
		ft_putchar(b);
	}
	ft_putchar(d);
}

void	rush(int x, int y)
{	
	char	a;
	char	c;
	char	g;
	int		e;
	int		f;

	a = 'A';
	c = 'C';
	g = ' ';
	e = x - 2;
	f = y - 2;
	if (x < 1 || y < 1)
		return ;
	width_1(x, y, a);
	while (f > 0)
	{
		width_3(x, y, g);
		f--;
	}
	if (y >= 2)
	{
		width_2(x, y, c);
	}
}
