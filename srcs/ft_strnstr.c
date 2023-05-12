/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annabrag <annabrag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:49:26 by annabrag          #+#    #+#             */
/*   Updated: 2023/05/12 13:25:29 by annabrag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libc/libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!big && !len)
		return (NULL);
	if (little[0] == '\0' || big == little)
		return ((char *)big);
	while (big[i])
	{
		j = 0;
		while (big[i + j] == little[j] && ((i + j) < len))
		{
			if (big[i + j] == '\0' && little[j] == '\0')
				return ((char *)(big + i));
			j++;
		}
		if (little[j] == '\0')
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}

/*int		main(void)
{
	char	*big = "Hello les amis, les petites vaches sont dans le pre";
	char	*little = "";

	printf("Result: %s\n", ft_strnstr(big, little, 1));
}*/
