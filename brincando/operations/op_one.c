/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_one.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 10:20:37 by mdouglas          #+#    #+#             */
/*   Updated: 2022/12/13 10:50:15 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operation.h"

void    sa(t_deque *stack[2])
{
    void    *ptr[2];
    
    if (stack[0]->size > 1)
    {
        ptr[0] = stack[0]->tail->content;
        deque_pop_back(stack[0], NULL);
        ptr[1] = stack[0]->tail->content;
        deque_pop_back(stack[0], NULL);
        deque_push_back(stack[0], ptr[0]);
        deque_push_back(stack[0], ptr[1]);
    }
}

void    sb(t_deque *stack[2])
{
    void    *ptr[2];

    if (stack[1]->size > 1)
    {
        ptr[0] = stack[1]->tail->content;
        deque_pop_back(stack[1], NULL);
        ptr[1] = stack[1]->tail->content;
        deque_pop_back(stack[1], NULL);
        deque_push_back(stack[1], ptr[0]);
        deque_push_back(stack[1], ptr[1]);
    }
}

void    ss(t_deque *stack[2])
{
    sa(stack);
    sb(stack);
}

void    pa(t_deque *stack[2])
{
    void    *ptr;

    if (stack[1]->size > 0)
    {
        ptr = stack[1]->tail->content;
        deque_pop_back(stack[1], NULL);
        deque_push_back(stack[0], ptr);
    }
}

void    pb(t_deque *stack[2])
{
    void    *ptr;

    if (stack[0]->size > 0)
    {
        ptr = stack[0]->tail->content;
        deque_pop_back(stack[0], NULL);
        deque_push_back(stack[1], ptr);
    }
}
