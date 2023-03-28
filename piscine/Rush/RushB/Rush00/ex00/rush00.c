/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 11:33:59 by brmajor           #+#    #+#             */
/*   Updated: 2022/10/23 13:31:34 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	width_1(int x, int y, char corner, char dash)
{
	char	backspace;

	backspace = '\n';
	ft_putchar(corner);
	while (x > 2)
	{
		ft_putchar(dash);
		x--;
	}
	if (x == 2)
	{
		ft_putchar(corner);
	}
	ft_putchar(backspace);
}

void	width_2(int x, int y, char pipe, char space)
{
	char	backspace;

	backspace = '\n';
	ft_putchar(pipe);
	while (x > 2)
	{
		ft_putchar(space);
		x--;
	}
	ft_putchar(pipe);
	ft_putchar(backspace);
}

void	rush(int x, int y)
{
	char	corner;
	char	dash;
	char	pipe;
	char	space;

	corner = 'o';
	dash = '-';
	pipe = '|';
	space = ' ';
	if (x <= 0 || y <= 0)
		return ;
	width_1(x, y, corner, dash);
	while (y > 2)
	{
		width_2(x, y, pipe, space);
		y--;
	}
	if (y >= 2)
	{
		width_1(x, y, corner, dash);
	}
}
