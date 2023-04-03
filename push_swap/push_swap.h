/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 13:39:06 by brmajor           #+#    #+#             */
/*   Updated: 2023/03/29 14:14:20 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft_custom/libft.h"
# include "libft_custom/ft_printf.h"

typedef struct	s_node
{
	int		content;
	struct s_node	*next;
}			t_node;

int	check_dup(int ac, char **av);
int	check_int(int ac, char **av);
void	check_error(int ac, char **av);

#endif
