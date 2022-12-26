/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 18:29:56 by mdouglas          #+#    #+#             */
/*   Updated: 2022/12/26 16:14:08 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
    t_chain *stack_a;
    t_chain *stack_b;

    check_arguments(argc, argv);
    if (argc == 1)
        return (0);
    stack_b = create_new_list(NULL);
    stack_a = create_new_list(stack_b);
    stack_a = parse_arguments(stack_a, argv);
    choose_algorithm(stack_a);
    free_list(&stack_a);
    return (0);
}
