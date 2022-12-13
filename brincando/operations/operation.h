/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 09:28:41 by mdouglas          #+#    #+#             */
/*   Updated: 2022/12/13 11:08:38 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATION_H
# define OPERATION_H

# include "../tuto.h"

void    init_stack(t_deque *stack, int *arr, int arr_size);
void	assigned_operation(void *ptr, t_deque *stack[2]);

/* deque */

void    deque_push_back(t_deque *deque, void *ptr);
void    deque_push_front(t_deque *deque, void *ptr);
void    deque_pop_back(t_deque *deque, void (*f)(void *));
void    deque_pop_front(t_deque *deque, void (*f)(void *));
t_deque *deque_init(void);

/* operation 1 */

void    sa(t_deque *stack[2]);
void    sb(t_deque *stack[2]);
void    ss(t_deque *stack[2]);
void    pa(t_deque *stack[2]);
void    pb(t_deque *stack[2]);

/* operation 2 */

void    ra(t_deque *stack[2]);
void    rb(t_deque *stack[2]);
void    rr(t_deque *stack[2]);
void    rra(t_deque *stack[2]);
void    rrb(t_deque *stack[2]);

/* operation dentro do init */

void    rrr(t_deque *stack[2]);


#endif