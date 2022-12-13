/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tuto.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 18:11:44 by mdouglas          #+#    #+#             */
/*   Updated: 2022/12/13 10:41:53 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TUTO_H
# define TUTO_H
# ifndef DEBUG
#   define DEBUG 0
# endif
# ifndef RADIX
#   define RADIX 0
# endif

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include "../ft/libft.h"
# include "./radix/radix.h"
# include "./operations/operation.h"

typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;

typedef struct s_double_list
{
    void                    *content;
    struct s_double_list    *next;
    struct s_double_list    *last;
}   t_double_list;

typedef struct s_deque
{
    int                     size;
    struct s_double_list    *head;
    struct s_double_list    *tail;
}   t_deque;

typedef enum e_memory
{
    push,
    pop,
    clear
}   t_memory;

#endif