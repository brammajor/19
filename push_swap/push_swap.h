/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 13:39:06 by brmajor           #+#    #+#             */
/*   Updated: 2023/04/03 17:51:56 by brmajor          ###   ########.fr       */
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

t_node	*makestack(int ac, char **av);
void	printstack(t_node **astack);

void	swap(t_node **head, char x);
void	pa(t_node **astack, t_node **bstack);
void	pb(t_node **astack, t_node **bstack);
void	rot(t_node **head, char x);
void	rerot(t_node **head, char x);

int	size_count(t_node **head);
void	sort_size(t_node **head);

int	is_sorted(t_node **head);
int	get_biggest(t_node **head);
int	get_smallest(t_node **head);

void	sort_3(t_node **head);

#endif
