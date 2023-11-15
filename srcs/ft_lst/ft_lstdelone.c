/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panther <panther@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 10:41:16 by annabrag          #+#    #+#             */
/*   Updated: 2023/11/15 18:43:54 by panther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*	Description:
	Cette fonction supprime un seul élément de la liste 'lst' en libérant la
	mémoire occupée par son contenu et par l'élément lui-même, en utilisant
	la fonction de suppression fournie 'del'.

	Valeur de retour:
	Aucune.
*/

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!del)
		return ;
	if (lst)
	{
		del(lst->content);
		free(lst);
	}
}

/*void	del(void *content)
{
	free(content);
}

void	print_list(t_list *head)
{
	t_list	*curr = head;

	while (curr != NULL)
	{
		printf("%s\n", (char *)curr->content);
		curr = curr->next;
	}
}

int	main(void)
{
	t_list	*elem = ft_lstnew("Élément à supprimer");

	printf("Avant la suppression :\n");
	print_list(elem);

	ft_lstdelone(elem, del);

	printf("Après la suppression :\n");
	print_list(elem);

	return (0);
}*/