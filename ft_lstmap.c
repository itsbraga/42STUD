/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panther <panther@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 13:05:46 by panther           #+#    #+#             */
/*   Updated: 2023/05/09 19:17:22 by panther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*  Description:
    Itère sur la liste ’lst’ et applique la fonction
    ’f ’au contenu de chaque élément. Crée une nouvelle
    liste résultant des applications successives de
    ’f’. La fonction ’del’ est là pour détruire le
    contenu d’un élément si nécessaire.
*/

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *new_lst;
    t_list  *elem;

    if (!lst || !f || !del)
        return (NULL);
    new_lst = 0;
    while (lst)
    {
        elem = ft_lstnew(f(lst->content));
        if (!elem)
        {
            ft_lstclear(&new_lst, del);
            return (NULL);
        }
        ft_lstadd_back(&new_lst, elem);
        lst = lst->next;
    }
    return(new_lst);
}

/*int   main(void)*/