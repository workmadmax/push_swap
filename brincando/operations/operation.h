/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 09:28:41 by mdouglas          #+#    #+#             */
/*   Updated: 2022/12/13 09:34:25 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATION_H
# define OPERATION_H

# include "../tuto.h"

void    init_stack(t_deque *stack, int *arr, int arr_size);
void	assigned_operation(void *ptr, t_deque *stack[2]);

#endif