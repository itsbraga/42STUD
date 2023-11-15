/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panther <panther@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:25:54 by annabrag          #+#    #+#             */
/*   Updated: 2023/11/15 18:53:03 by panther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	len;

	len = 0;
	i = 0;
	while (s[i++])
		len++;
	i = 0;
	while (i <= len)
	{
		if ((char)c == s[i])
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	char	s[]="I like p,inea,pples.";
	char	c = '\0';
	
	printf("searchedChar: |%c|\nMy function: %s\n", c, ft_strchr(s, c));
	printf("searchedChar: |%c|\nTrue: %s\n", c, strchr(s, c));
}*/
