/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_number.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 09:18:07 by mdouglas          #+#    #+#             */
/*   Updated: 2022/12/13 09:26:34 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "radix.h"

void    display_number_width11_base2(int num)
{
    int         idx;
    extern int  g_size;
    
    idx = 0;
    while (idx + g_size < 11)
    {
        ft_putchar_fd(' ', 1);
        idx++;
    }
    idx = g_size - 1;
    while (idx >= 0)
    {
        ft_putchar_fd(((num>>idx)&1) + '0', 1);
        idx--;
    }
}