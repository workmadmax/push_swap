/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_two.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 10:57:48 by mdouglas          #+#    #+#             */
/*   Updated: 2022/12/13 11:03:43 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operation.h"

void    ra(t_deque *stack[2])
{
    void    *ptr;

    if (stack[0]->size == 0)
        return ;
    ptr = stack[0]->tail->content;
    deque_pop_back(stack[0], NULL);
    deque_push_front(stack[0], ptr);
}

void    rb(t_deque *stack[2])
{
    void    *ptr;

    if (stack[1]->size == 0)
        return ;
    ptr = stack[1]->tail->content;
    deque_pop_back(stack[1], NULL);
    deque_push_front(stack[1], ptr);
}

void    rr(t_deque *stack[2])
{
    ra(stack);
    rb(stack);
}

void    rra(t_deque *stack[2])
{
    void    *ptr;

    if (stack[0]->size == 0)
        return ;
    ptr = stack[0]->head->content;
    deque_pop_front(stack[0], NULL);
    deque_push_back(stack[0], ptr);
}

void    rrb(t_deque *stack[2])
{
    void    *ptr;

    if (stack[1]->size == 0)
        return ;
    ptr = stack[1]->head->content;
    deque_pop_front(stack[1], NULL);
    deque_push_back(stack[1], ptr);
}