/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 18:37:54 by mdouglas          #+#    #+#             */
/*   Updated: 2022/12/12 18:39:07 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tuto.h"

void    init_stack(t_deque *stack, int *arr, int arr_size)
{
    int ct;

    ct = -1;
    while (++ct < arr_size)
        deque_push_front(stack, arr + ct);
}