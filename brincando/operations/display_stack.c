/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 11:10:48 by mdouglas          #+#    #+#             */
/*   Updated: 2022/12/13 11:21:13 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operation.h"

static void display_number_width11(int num)
{
    int ct[2];

    ct[0] = 1;
    if (num < 0)
        ct[0]++;
    ct[1] = num;
    while (ct[1] > 9 || ct[1] < -9)
    {
        ct[0]++;
        ct[1] /= 10;
    }
    ct[0] = 11 - ct[0];
    while (ct[0]--)
        ft_putchar_fd(' ', 1);
    ft_putnbr_fd(num, 1);
}

static void sub_op(int ct[3], t_double_list *cur[2], char *msg, t_deque *stack[2])
{
    ct[0] = ft_max(stack[0]->size, stack[1]->size);
    ct[2] = stack[0]->size + stack[1]->size - ct[0];
    ft_putendl_fd(msg, 1);
    while (ct[2]-- > 0)
        ft_putendl_fd("", 1);
    cur[0] = stack[0]->tail;
    cur[1] = stack[1]->tail;
}

void    display_stacks(t_deque *stack[2], char *msg)
{
    int                 ct[3];
    t_double_list       *cur[2];

    sub_op(ct, cur, msg, stack);
    while (--ct[0] >= 0)
    {
        if (ct[0] < stack[0]->size)
        {
            display_number_width11(*((int *)cur[0]->content));
            cur[0] = cur[0]->last;
        }
        else
            ft_putstr_fd("           ", 1);
		ft_putstr_fd("     ", 1);
        if (ct[0] < stack[1]->size)
        {
            display_number_width11(*((int *)cur[1]->content));
            cur[1] = cur[1]->last;
        }
        ft_putendl_fd("", 1);
    }
    ft_putendl_fd("__________a     __________b", 1);
	ft_putendl_fd("---------------------------", 1);
}
