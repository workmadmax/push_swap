/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 19:34:49 by mdouglas          #+#    #+#             */
/*   Updated: 2022/06/23 14:04:05 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <stdio.h>

// compile the main with libftprintf.a and test 'ft_printf'

int main()
{
    printf("%p %p", 0, 0);
    ft_printf("%p %p", 0, 0);

    return (0);
}
