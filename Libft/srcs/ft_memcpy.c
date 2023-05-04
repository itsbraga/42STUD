/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annabrag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 11:30:57 by annabrag          #+#    #+#             */
/*   Updated: 2023/05/04 12:27:29 by annabrag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	((char *)dest)[i] = '\0';
	return ((char *)dest);
}

/*#include <stdio.h>

int		main(void)
{
	char	dest[100];
	char	src[] = "Le 4 mai est le 124e jour de l'annee";
	char	*ret1 = ft_memcpy(dest, src, 24);
	char	*ret2 = memcpy(dest, src, 24);

	printf("My function: %s\n", ret1);
	printf("True function: %s\n", ret2);
}*/
