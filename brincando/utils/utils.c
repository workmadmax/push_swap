/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 18:42:44 by mdouglas          #+#    #+#             */
/*   Updated: 2022/12/13 09:06:00 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void    error_exit(void)
{
    ft_putendl_fd("Error", 2);
    ft_free_all();
    exit(EXIT_FAILURE);
}

void    ft_free_all(void)
{
    ft_memory(0U, 0U, NULL, clear);
}

void    *ft_calloc_2(size_t elem_cnt, size_t elem_size)
{
    void    *ans;

    ans = malloc(elem_cnt * elem_size);
    if (!ans)
    {
        ft_putstr_fd("Error_in_ft_calloc_2\n", 1);
        return (NULL);
    }
    ft_memset(ans, 0, elem_cnt * elem_size);
    return (ans);
}

t_list  *ft_lstnew_2(void *content)
{
    t_list  *new;

    new = (t_list*)malloc(sizeof(t_list));
    if (!new)
    {
        ft_putstr_fd("Error_in_ft_lstnew2\n", 1);
        return (NULL);
    }
    new->content = content;
    new->next = NULL;
    return (new);
}

void	*ft_memory(size_t elem_cnt,
size_t elem_size, void *del, t_memory type)
{
	static t_list	*head;
	void			*new_mem;

	if (type == push)
	{
		new_mem = ft_calloc_2(elem_cnt, elem_size);
		if (!new_mem)
			ft_putstr_fd("ERROR_IN_FT_MEMORY_0\n", 1);
		else if (!(ft_lstadd_front(&head, ft_lstnew_2(new_mem))))
			ft_putstr_fd("ERROR_IN_FT_MEMORY_1\n", 1);
		return (new_mem);
	}
	if (type == pop)
		ft_lstdelone_2(&head, ft_lstfind(head, del), free);
	else
		ft_lstclear_2(&head, free);
	return (NULL);
}
