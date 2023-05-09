/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panther <panther@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 10:52:34 by panther           #+#    #+#             */
/*   Updated: 2023/05/09 18:13:04 by panther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*  Paramètres:

    lst: L’adresse du pointeur vers un élément.
    del: L’adresse de la fonction permettant de
    supprimer le contenu d’un élément.

    Description:

    Supprime et libère la mémoire de l’élément passé en
    paramètre, et de tous les éléments qui suivent, à
    l’aide de ’del’ et de free(3)
    Enfin, le pointeur initial doit être mis à NULL.
 */

void    ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list  *tmp;

    if (!lst || !del)
        return;
    while (*lst)
    {
        tmp = (*lst)->next;
        ft_lstdelone(*lst, del);
        *lst = tmp;
    }
}

/*int   main(void)*/