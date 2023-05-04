/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annabrag <annabrag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 19:10:10 by annabrag          #+#    #+#             */
/*   Updated: 2023/05/03 20:15:32 by annabrag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(char *)(s + i) = c;
		i++;
	}
	return (s);
}

/*#include <stdio.h>

int		main(void)
{
	char	s[50];

	puts("Target:");
	strcpy(s, "You're using a function of string.h");
	puts(s);
	puts("\n");

	puts("My function:");
	ft_memset(s, '/', 7);
	puts(s);
	puts("\n");

	puts("Computer's function:");
	memset(s, '/', 7);
	puts(s);
}*/
