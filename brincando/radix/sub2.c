/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sub2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 09:12:54 by mdouglas          #+#    #+#             */
/*   Updated: 2022/12/13 09:15:52 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "radix.h"

void    sub2(int ct[3], t_double_list *cur[2], char *msg, t_deque *stack[2])
{
    ct[0] = ft_max(stack[0]->size, stack[1]->size);
    ct[2] = stack[0]->size + stack[1]->size - ct[0];
    ft_putendl_fd(msg, 1);
    while (ct[2]-- > 0)
        ft_putendl_fd("", 1);
    cur[0] = stack[0]->tail;
    cur[1] = stack[1]->tail;
}