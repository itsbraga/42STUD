/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annabrag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:49:26 by annabrag          #+#    #+#             */
/*   Updated: 2023/05/05 15:54:10 by annabrag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!little || !big)
		return (NULL);
	if (*little == '\0' || *big == *little)
		return ((char *)big);
	while (big[i] && i < len)
	{
		while (big[i + j] == little[j] && ((i + j) < len))
		{
			j++;
			if (little[j] == '\0')
				return ((char *)big + i);
		}
		i++;
		j = 0;
	}
	return (NULL);
}

/*int		main(void)
{
	char	*big = "Hello les amis, les petites vaches sont dans le pre";
	char	*little = "";

	printf("Result: %s\n", ft_strnstr(big, little, 1));
}*/
