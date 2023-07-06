/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraccane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 11:50:24 by eraccane          #+#    #+#             */
/*   Updated: 2023/06/30 12:21:42 by eraccane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

# include "ft_printf/includes/ft_printf.h"

typedef struct Stack_node{
	int					value;
	int					position;
	int					move_price;
	int					above_middle;
	int					cheapest;
	struct Stack_node	*next;
	struct Stack_node	*prev;
}	t_Stack_node;

t_Stack_node	*ft_find_last(t_Stack_node *stack);
int				ft_stacklen(t_Stack_node *stack);
void			ft_print_stack(t_Stack_node *stack);
t_Stack_node	*ft_find_smallest(t_Stack_node *stack);

int				ft_check_err(int n, char *s[]);
int				ft_check_str(int n, char *s[]);
int				ft_check_dup(int n, char *s[]);
int				ft_check_bigint(int n, char *s[]);

void			ft_push_swap(int n, char *s[]);
void			ft_start_swap(t_Stack_node *a, t_Stack_node *b);
void			ft_sort_2(t_Stack_node *a);

void			ft_sort_3(t_Stack_node *a);
void			ft_one_middle(t_Stack_node *a);
void			ft_three_middle(t_Stack_node *a);

int				ft_check_sorted(t_Stack_node *stack);

void			ft_add_node(t_Stack_node **stack, int value);
void			ft_free_stack(t_Stack_node *stack);
int				ft_is_empty(t_Stack_node *stack);
void			ft_pop_node(t_Stack_node **stack);

void			ft_print_sa(void);
void			ft_print_sb(void);
void			ft_print_ss(void);
void			ft_print_pa(void);
void			ft_print_pb(void);
void			ft_print_ra(void);
void			ft_print_rb(void);
void			ft_print_rr(void);
void			ft_print_rra(void);
void			ft_print_rrb(void);
void			ft_print_rrr(void);

#endif
