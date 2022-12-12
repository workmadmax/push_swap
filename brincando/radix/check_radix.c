/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_radix.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 18:14:41 by mdouglas          #+#    #+#             */
/*   Updated: 2022/12/12 18:56:06 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tuto.h"

void    check_radix(int *arr, int arr_size, t_list *instructions)
{
    t_list              *cur_instruction;
    t_deque             *stack[2];
    void                *last_operation;
    extern int          g_size;

    stack[0] = deque_init();
    stack[1] = deque_init();
    if (!stack[0] || !stack[1])
        error_exit();
    init_stack(stack[0], arr, arr_size);
    cur_instruction = instructions;
    last_operation = "Init a and b";
    clear_screen();
    g_size = 0;
    while (((arr_size - 1)>>g_size) > 0)
        ++g_size;
    display_stack_radix(stack, last_operation);
    ft_putendl_fd("press enter to continue", 1);
    sub(cur_instruction, stack, last_operation);
    ok(instructions);
}