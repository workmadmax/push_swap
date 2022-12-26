/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_duplicate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 17:54:44 by mdouglas          #+#    #+#             */
/*   Updated: 2022/12/26 12:27:52 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/**
 * @brief verifica se há números duplicados em uma lista encadeada.
 * 
 * @param list Lista encadeada a ser verificada.
 */
void	check_duplicate_number(t_chain *list)
{
	int		count;
	t_node	*checked;
	t_node	*temp;

	checked = list->head;
	while (checked)
	{
		count = 0;
		temp = list->head;
		while (temp)
		{
			if (checked->data == temp->data)
				count++;
			if (count > 1)
				error_msg("Error\n", list);
			temp = temp->next;
		}
		checked = checked->next;
	}
}