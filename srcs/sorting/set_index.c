/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 18:15:14 by mdouglas          #+#    #+#             */
/*   Updated: 2022/12/26 11:46:55 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/**
 * @brief Atualiza o índice de cada node em uma lista.
 * 
 * @param stack_a A lista encadeada a ser atualizada.
 * @return t_chain* A lista encadeada atualizada.
 */
t_chain	*set_index(t_chain *stack_a)
{
	size_t	idx;
	t_node	*lower;
	t_node	*temp;

	idx = 0;
	temp = stack_a->head;
	while (idx < stack_a->size)
	{
		lower = stack_a->head;
		temp = stack_a->head;
		while (temp)
		{
			if (lower->index != -1 && temp->index == -1)
				lower = temp;
			if (lower->data > temp->data && temp->index == -1)
				lower = temp;
			temp = temp->next;
		}
		lower->index = idx;
		idx++;
	}
	return (stack_a);
}
