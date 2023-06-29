/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraccane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 11:50:24 by eraccane          #+#    #+#             */
/*   Updated: 2023/06/17 11:50:26 by eraccane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

# include "ft_printf/includes/ft_printf.h"

typedef struct {
    int     size;
    int     top;
    int     capacity;
    int*    collection;
} Stack;

int	    ft_check_err(int n, char *s[]);
int	    ft_check_str(int n, char *s[]);
int	    ft_check_dup(int n, char *s[]);
int     ft_check_bigint(int n, char *s[]);

void    ft_push_swap(int n, char *s[]);
void    ft_start_swap(Stack *a, Stack *b);

void    ft_sort_3(Stack *a);
void    ft_sort_all(Stack *a, Stack *b);

int     ft_check_sorted(Stack *stack);

Stack   *ft_createStack(int capacity);
void    ft_freeStack(Stack *stack);
int     ft_isFull(Stack *stack);
int     ft_isEmpty(Stack *stack);
int     ft_push(Stack *stack, int n);
int     ft_pop(Stack *stack);
void    ft_print_stack(Stack *stack); //solo per fase di test

void    ft_sa(Stack *a);
void    ft_sb(Stack *b);
void    ft_ss(Stack *a, Stack *b);

void    ft_pa(Stack *a, Stack *b);
void    ft_pb(Stack *a, Stack *b);

void    ft_ra(Stack *a);
void    ft_rb(Stack *b);
void    ft_rr(Stack *a, Stack *b);

void    ft_rra(Stack *a);
void    ft_rrb(Stack *b);
void    ft_rrr(Stack *a, Stack *b);

void    ft_print_sa(void);
void    ft_print_sb(void);
void    ft_print_ss(void);
void    ft_print_pa(void);
void    ft_print_pb(void);
void    ft_print_ra(void);
void    ft_print_rb(void);
void    ft_print_rr(void);
void    ft_print_rra(void);
void    ft_print_rrb(void);
void    ft_print_rrr(void);

#endif
