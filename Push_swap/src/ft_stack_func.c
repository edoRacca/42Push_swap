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


Stack   *ft_createStack(int capacity)
{
    Stack *stack = malloc(sizeof(Stack));
    stack->collection = (int *)malloc(capacity * sizeof(int));
    if (stack->collection == NULL)
    {
        free(stack);
        return NULL;
    }
    stack->capacity = capacity;
    stack->size = 0;
    stack->top = -1;
    return (stack);
}

void ft_freeStack(Stack *stack)
{
    free(stack->collection);
    free(stack);
}

int ft_isFull(Stack *stack)
{
    if (stack->capacity == stack->size)
        return (1);
    return (0);
}

int ft_isEmpty(Stack *stack)
{
    if (stack->size == 0)
        return (1);
    return (0);
}

int ft_push(Stack *stack, int n)
{
    if (ft_isFull(stack) == 1)
        return (1);
    stack->collection[stack->size] = n;
    stack->size++;
    stack->top++;
    return (0);
}

int ft_pop(Stack *stack)
{
    if (ft_isEmpty(stack) == 1)
        return (1);
   stack->collection[stack->top] = 0;
    stack->size--;
    stack->top--;
    return (0);
}

//solo per fase di test
void ft_print_stack(Stack *stack)
{
    int i;

    i = stack->size - 1;
    while (i >= 0)
    {
        ft_printf("stack[%d]: %d\n", i, stack->collection[i]);
        i--;
    }
    ft_printf("\n");
}