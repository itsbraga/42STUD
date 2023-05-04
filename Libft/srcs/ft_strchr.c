/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annabrag <annabrag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:25:54 by annabrag          #+#    #+#             */
/*   Updated: 2023/05/03 19:55:06 by annabrag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (c == str[i])
			return (str + i); // returns a const char * instead of a char *
		i++;
	}
	return (0);
}

/*#include <stdio.h>

int	main(void)
{
	const char	str[]="I like p,inea,pples.";
	const char	c = ',';
	char		*rest;

	rest = ft_strchr(str, c);

	printf("La string qui suit le caractere recherche '%c' est '%s'\n", c, rest);
}*/