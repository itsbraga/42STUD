/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annabrag <annabrag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:00:35 by annabrag          #+#    #+#             */
/*   Updated: 2023/05/03 19:55:12 by annabrag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_strlen(const char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *str)
{
	int		i;
	int		slen;
	char	*dup;

	slen = ft_strlen(str);
	dup = malloc(sizeof(const char *) * (slen + 1));
	if (!dup)
		return (NULL);
	if (!str)
		return (NULL);
	i = 0;
	while (str[i])
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

/*#include <stdio.h>

int		main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	printf("%s\n", ft_strdup(argv[1]));
}*/
