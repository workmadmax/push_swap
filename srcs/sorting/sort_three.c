/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 19:02:54 by mdouglas          #+#    #+#             */
/*   Updated: 2022/12/25 15:04:21 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/**
 * @brief Classifica uma lista encadeada de tamanho 3.
 * 
 * @param list A lista enncadeada a ser classificada.
 * @return Void function.
 */
void    sort_three(t_chain *list)
{
    t_node  *temp;

    set_index(list);
    temp = list->head;
    if (check_sorted(list))
        return ;
    while (temp->next)
    {
        if (temp->index == 2 && temp->next->index == 0)
        {
            if (temp == list->head)
                rotate("ra\n", list);
            else
                rev_rotate("rra\n", list);
            return ;
        }
        temp = temp->next;
    }
    swap("sa\n", list);
    sort_three(list);
}
