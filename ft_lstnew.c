/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panther <panther@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:16:57 by panther           #+#    #+#             */
/*   Updated: 2023/05/09 18:06:56 by panther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list  *lst;

    lst = malloc(sizeof(t_list));
    if (!lst)
        return (NULL);
    lst->content = content;
    lst->next = NULL;
    return (lst); 
}