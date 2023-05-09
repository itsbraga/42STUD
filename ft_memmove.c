/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annabrag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 20:00:20 by annabrag          #+#    #+#             */
/*   Updated: 2023/05/06 14:00:18 by panther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*dstc;
	unsigned char	*srcc;

	if (!dst && !src)
		return (NULL);
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
