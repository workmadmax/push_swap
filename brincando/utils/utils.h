/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 09:03:21 by mdouglas          #+#    #+#             */
/*   Updated: 2022/12/13 09:05:28 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include "../tuto.h"

void    error_exit(void);
void    ft_free_all(void);
void    *ft_calloc_2(size_t elem_cnt, size_t elem_size);
t_list  *ft_lstnew_2(void *content);
void	*ft_memory(size_t elem_cnt,
size_t elem_size, void *del, t_memory type);

#endif