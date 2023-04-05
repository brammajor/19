/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 13:39:06 by brmajor           #+#    #+#             */
/*   Updated: 2023/04/05 12:00:21 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft_custom/libft.h"
# include "libft_custom/ft_printf.h"

typedef struct s_node
{
	int		content;
	struct s_node	*next;
}			t_node;

int		check_dup(int ac, char **av);
int		check_int(int ac, char **av);
void	check_error(int ac, char **av);

t_node	*makestack(int ac, char **av);
void	printstack(t_node **astack);

void	swap(t_node **head, char x);
void	pa(t_node **astack, t_node **bstack);
void	pb(t_node **astack, t_node **bstack);
void	rot(t_node **head, char x);
void	rerot(t_node **head, char x);

int		size_count(t_node **head);
void	sort_size(t_node **head, t_node **bstack);

int		is_sorted(t_node **head);
int		get_max(t_node **head);
int		get_min(t_node **head);

int		steps_min(t_node **astack);
int		steps_max(t_node **astack);
int		rot_or_rerot(int steps, int size);
int		get_path(int steps_min, int steps_max,
		int trigger_min, int trigger_max);
int		calc_path(t_node **astack);

void	rot_min(t_node **astack, t_node **bstack);
void	rerot_min(t_node **astack, t_node **bstack);
void	rot_max(t_node **astack, t_node **bstack);
void	rerot_max(t_node **astack, t_node **bstack);
int	next_step(t_node **astack, t_node **bstack);

void	push_min_max(t_node **astack, t_node **bstack, int path);
void	sort_2(t_node **head);
void	sort_3(t_node **head);
void	sort_4(t_node **head, t_node **bstack);
void	sort_5(t_node **head, t_node **bstack);

#endif
