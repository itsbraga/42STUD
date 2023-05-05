/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annabrag <annabrag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:00:35 by annabrag          #+#    #+#             */
/*   Updated: 2023/05/05 17:36:54 by annabrag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

/*int	main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	printf("%s\n", ft_strdup(argv[1]));
}*/
