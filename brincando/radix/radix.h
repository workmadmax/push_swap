/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 09:01:38 by mdouglas          #+#    #+#             */
/*   Updated: 2022/12/13 09:26:56 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADIX_H
# define RADIX_H

#include "../tuto.h"

/* utils radix */

void    clear_screen(void);
void    the_end(void);
void    ok(t_list *instructions);

/* radxi */

void    sub2(int ct[3], t_double_list *cur[2], char *msg, t_deque *stack[2]);
void    display_number_width11_base2(int num);
void    display_stack_radix(t_deque *stack[2], char *msg);
void    check_radix(int *arr, int arr_size, t_list *instructions);

#endif