/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annabrag <annabrag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:25:54 by annabrag          #+#    #+#             */
/*   Updated: 2023/05/05 17:30:53 by annabrag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	len;

	len = 0;
	i = -1;
	while (s[++i])
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
