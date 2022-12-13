/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_stack_radix.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 09:11:43 by mdouglas          #+#    #+#             */
/*   Updated: 2022/12/13 09:25:29 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "radix.h"

void    display_stack_radix(t_deque *stack[2], char *msg)
{
    int                     ct[3];
    t_double_list           *cur[2];
    
    sub2(ct, cur, msg, stack);
    while (--ct[0] >= 0)
    {
        if (ct[0] < stack[0]->size)
        {
            display_number_width11_base2(*((int *)cur[0]->content));
            cur[0] = cur[0]->last;
        }
        else
            ft_putstr_fd("           ", 1);
        ft_putstr_fd("     ", 1);
        if (ct[0] < stack[1]->size)
        {
            display_number_width11_base2(*((int *)cur[1]->content));
            cur[1] = cur[1]->last;
        }
        ft_putendl_fd("", 1);
    }
    ft_putendl_fd("__________a     __________b", 1);
	ft_putendl_fd("---------------------------", 1);
}