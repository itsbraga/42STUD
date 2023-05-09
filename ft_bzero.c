/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annabrag <annabrag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 19:23:31 by annabrag          #+#    #+#             */
/*   Updated: 2023/05/05 13:49:55 by annabrag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	if (!s)
		return ;
	while (i < n)
	{
		*(char *)(s + i) = 0;
		i++;
	}
}

/*int	main(void)
{
	char	s[50];

	puts("Target:");
	strcpy(s, "J'adore les sushis.");
	puts(s);
	puts("\n");

	puts("My function:");
	ft_bzero(s, 2);
	puts(s);
	puts("\n");

	puts("Computer's function:");
	bzero(s, 2);
	puts(s);
}*/
