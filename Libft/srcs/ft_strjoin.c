/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annabrag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 20:25:13 by annabrag          #+#    #+#             */
/*   Updated: 2023/05/03 20:41:43 by annabrag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
//	char	*join;
	int		i;
	int		j;

//	join = malloc(sizeof(char const *) * ());
//	if (!join)
//		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[j])
	{
		s1[i] = s2[j];
		j++;
		i++;
	}
//	join = s1;
//	join = 0;
//	return (join);
	s1[i] = '\0';
	return (s1);
}

#include <stdio.h>

int	main(void)
{
	char s1[] = "Il est 20:37,";
	char s2[] = "et je ne suis toujours pas rentree";
	printf("%s\n", ft_strjoin(s1, s2));
}
