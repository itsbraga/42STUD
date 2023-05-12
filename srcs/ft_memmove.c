/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annabrag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 20:00:20 by annabrag          #+#    #+#             */
/*   Updated: 2023/05/05 23:14:51 by annabrag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*dstc;
	unsigned char	*srcc;
	size_t			i;

	if (!dst && !src)
		return (NULL);
	i = 0;
	if (src < dst)
	{
		dstc = (unsigned char *)dst + (n - 1);
		srcc = (unsigned char *)src + (n - 1);
		while (n--)
			*dstc-- = *srcc--;
	}
	else
	{
		dstc = (unsigned char *)dst;
		srcc = (unsigned char *)src;
		while (n--)
			*dstc++ = *srcc++;
	}
	return (dst);
}

/*int	main(void)
{
	char	dst[100];
	char	src[] = "lorem ipsum dolor sit amet";

	printf("memBlock dest: %s\n", (char *)ft_memmove(dst, src, 5));
}*/
