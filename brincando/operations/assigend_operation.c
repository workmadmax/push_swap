/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assigend_operation.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 09:28:33 by mdouglas          #+#    #+#             */
/*   Updated: 2022/12/13 09:34:14 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operation.h"

void	assigned_operation(void *ptr, t_deque *stack[2])
{
	char	*str;

	str = ptr;
	if (!ft_strncmp(str, "sa", 3))
		sa(stack);
	if (!ft_strncmp(str, "sb", 3))
		sb(stack);
	if (!ft_strncmp(str, "ss", 3))
		ss(stack);
	if (!ft_strncmp(str, "pa", 3))
		pa(stack);
	if (!ft_strncmp(str, "pb", 3))
		pb(stack);
	if (!ft_strncmp(str, "ra", 3))
		ra(stack);
	if (!ft_strncmp(str, "rb", 3))
		rb(stack);
	if (!ft_strncmp(str, "rr", 3))
		rr(stack);
	if (!ft_strncmp(str, "rra", 4))
		rra(stack);
	if (!ft_strncmp(str, "rrb", 4))
		rrb(stack);
	if (!ft_strncmp(str, "rrr", 4))
		rrr(stack);
}