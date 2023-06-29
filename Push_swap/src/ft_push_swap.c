/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraccane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 11:50:32 by eraccane          #+#    #+#             */
/*   Updated: 2023/06/17 11:50:36 by eraccane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void ft_start_swap(Stack *a, Stack *b)
{
    if (a->size == 2)
    {
        if (ft_check_sorted(a) == 0)
            ft_sa(a);
    }
    if (a->size == 3)
        ft_sort_3(a);
    if (a->size > 3 && a->size < 500)
        ft_sort_all(a, b);
    
}

void ft_push_swap(int n, char *s[])
{
    Stack   *a;
    Stack   *b;
    int     i;
    int     j;

    a = ft_createStack(n - 1);
    b = ft_createStack(n - 1);
    i = 0;
    j = n - 1;
    while (i < a->capacity)
    {
        ft_push(a, ft_atoi(s[j]));
        i++;
        j--;
    }
    ft_print_stack(a);
    ft_start_swap(a, b);
    ft_print_stack(a);
}
