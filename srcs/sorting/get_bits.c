/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_bits.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 18:02:31 by mdouglas          #+#    #+#             */
/*   Updated: 2022/12/21 18:10:32 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/**
 * @brief Determina o número de bits necessário para
 * representar um número inteiro.
 * 
 * @param nbr O número a ser verificado.
 * @return int  O número de bits necessário para
 * representar o número inteiro.
 */
int get_bits(int nbr)
{
    int num_bits;

    num_bits = 0;
    while (nbr >> num_bits)
        num_bits++;
    return (num_bits);
}
