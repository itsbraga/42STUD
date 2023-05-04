/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annabrag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 12:28:00 by annabrag          #+#    #+#             */
/*   Updated: 2023/05/04 12:38:07 by annabrag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;

}

#include <stdio.h>

int		main(void)
{
	const char	s1[]="Hello people";
	const char	s2[]="Hello world";
	const char	s3[]="Hello world";
	const char	s4[]="Hello worldd";
	const char	s5[]="Salut a tous";
	const char	s6[]="Salut";
	const char	s7[]="";
	const char	s8[]="N";
	const char	s9[]="Je suis fort";
	const char	s10[]="Je suis fort";

	printf("%d\n", ft_strncmp(s1, s2, 7));
	printf("%d\n", strncmp(s1, s2, 7));
	printf("%d\n", ft_strncmp(s3, s4, 12));
	printf("%d\n", strncmp(s3, s4, 12));
	printf("%d\n", ft_strncmp(s5, s6, 12));
	printf("%d\n", strncmp(s5, s6, 12));
	printf("%d\n", ft_strncmp(s7, s8, 2));
	printf("%d\n", strncmp(s7, s8, 2));
	printf("%d\n", ft_strncmp(s9, s10, 25));
	printf("%d\n", strncmp(s9, s10, 25));
}
