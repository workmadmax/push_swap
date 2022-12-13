/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deque.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 10:25:36 by mdouglas          #+#    #+#             */
/*   Updated: 2022/12/13 10:42:25 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operation.h"

t_deque *deque_init(void)
{
    t_deque *deque;

    deque = malloc(sizeof(t_deque));
    if (!deque)
        return (deque);
    deque->head = NULL;
    deque->tail = NULL;
    deque->size = 0;
    return (deque);
}

void    deque_push_back(t_deque *deque, void *ptr)
{
    t_double_list   *temp;

    (deque->size)++;
    temp = s_double_list(ptr);
    if (!temp)
        return ;
    if (deque->size == 1)
    {
        deque->head = temp;
        deque->tail = temp;
        return ;
    }
    temp->last = deque->tail;
    deque->tail->next = temp;
    deque->tail = deque->tail->next;
}

void    deque_push_front(t_deque *deque, void *ptr)
{
    t_double_list   *temp;
    
    (deque->size)++;
    temp = s_double_list(ptr);
    if (!temp)
        return ;
    if (deque->size == 1)
    {
        deque->head = temp;
        deque->tail = temp;
        return ;
    }
    temp->next = deque->head;
    deque->head->last = temp;
    deque->head = deque->head->last;
}

void    deque_pop_back(t_deque *deque, void (*f)(void *))
{
    t_double_list   *temp;

    if (deque->size < 1 || !deque->tail)
        return ;
    (deque->size)--;
    temp = deque->tail;
    deque->tail = deque->tail->last;
    if (deque->tail)
        deque->tail->next = NULL;
    if (f)
        f(temp->content);
    free(temp);
}

void    deque_pop_front(t_deque *deque, void (*f)(void *))
{
    t_double_list   *temp;

    if (deque->size < 1 || !deque->head)
        return ;
    (deque->size)--;
    temp = deque->head;
    deque->head = deque->head->next;
    if (deque->head)
        deque->head->last = NULL;
    if (f)
        f(temp->content);
    free(temp);
}