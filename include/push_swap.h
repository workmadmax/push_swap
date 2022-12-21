/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 17:59:24 by mdouglas          #+#    #+#             */
/*   Updated: 2022/12/21 19:39:48 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "./ft/libft.h"


typedef struct s_node
{
    int             data;
    int             index;
    struct s_node   *next;
    struct s_node   *prev;
}   t_node;

typedef struct s_chain
{
    size_t          size;
    struct s_node   *head;
    struct s_node   *tail;
    struct s_chain  *stack_b;
}   t_chain;

/* sorting */

int         get_bits(int nbr);
void        ft_radix(t_chain *stack_a, t_chain *stack_b);

t_chain     *set_index(t_chain *stack_a);

/* instructions */

t_chain     *push(char *character, t_chain *source, t_chain *dest);
t_chain     *rev_rotation(char *character, t_chain *stack);
t_chain     *rotate(char *character, t_chain *stack);

#endif