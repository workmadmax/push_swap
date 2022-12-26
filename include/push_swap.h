/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 17:59:24 by mdouglas          #+#    #+#             */
/*   Updated: 2022/12/26 14:05:36 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "../ft/libft.h"

# define INT_MIN -2147483648
# define INT_MAX 2147483647

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
void        sort_three(t_chain *list);
void        sort_fifty(t_chain *stack_a, t_chain *stack_b);

t_chain     *set_index(t_chain *stack_a);

/* instructions */

t_chain     *push(char *character, t_chain *source, t_chain *dest);
t_chain     *rev_rotate(char *character, t_chain *stack);
t_chain     *rotate(char *character, t_chain *stack);
t_chain     *swap(char *character, t_chain *stack);

void        ult_rev_rotate(t_chain *stack_one, t_chain *stack_two);
void        ult_rotate(t_chain *stack_one, t_chain *stack_two);
void        ult_swap(t_chain *stack_one, t_chain *stack_two);

/* manage list */

void        free_list(t_chain **list);
size_t      get_lower_index(t_chain *stack);
t_chain     *create_new_list(t_chain *list);
t_chain     *add_node_head(t_chain *list, int data, int index);
t_chain     *add_node_tail(t_chain *list, int data, int index);

/* errors */

void        error_msg(char *mensage, t_chain *list);
void        cleanup_handle_error(char **buffer, t_chain *list);
void        check_duplicate_number(t_chain *list);
void	    check_arguments(int num_args, char **args);
void        check_digits_presence(int num_args, char **args);

/* parse */

int         ft_atoi_list(char **str, t_chain *lst, int j);
int         check_sorted(t_chain *stack_a);

t_chain     *parse_arguments(t_chain *stack_a, char **argv);
t_chain     *choose_algorithm(t_chain *stack_a);

#endif