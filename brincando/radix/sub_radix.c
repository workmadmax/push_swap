/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sub_radix.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 09:08:03 by mdouglas          #+#    #+#             */
/*   Updated: 2022/12/13 11:06:34 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "radix.h"

void    sub_radix(t_list *cur_instruction, t_deque *stack[2], void *last_operation)
{
    char                c;
    t_double_list       *cur;

    while (cur_instruction)
    {
        read(0, &c, 1);
        if (c == '\n')
        {
            clear_screen();
            display_stack_radix(stack, last_operation);
            assigned_operation(cur_instruction->content, stack);
            display_stack_radix(stack, (char *)(cur_instruction->content));
            last_operation = cur_instruction->content;
            cur_instruction = cur_instruction->next;
        }
    }
    if (stack[1]->size)
        the_end();
    cur = stack[0]->head;
    while (cur->next)
    {
        if (*((int *)cur->content) < ((int *)cur->next->content))
            the_end();
        cur = cur->next;
    }
}