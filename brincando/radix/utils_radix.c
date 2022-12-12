/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_radix.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 18:17:20 by mdouglas          #+#    #+#             */
/*   Updated: 2022/12/12 18:21:11 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tuto.h"

void    clear_screen(void)
{
    write(1, "\e[1;1H\e[2J", 11);
}

void    the_end(void)
{
    ft_putendl_fd("\033[0;31mKO\033[0m", 1);
    exit(EXIT_SUCCESS);
}

void    ok(t_list *instructions)
{
    ft_putstr_fd("\033[1;32mOK with ", 1);
    ft_putnbr_fd(ft_lstsize(instructions), 1);
    ft_putendl_fd(" operations\033[0m", 1);
    exit(EXIT_SUCCESS);
}
