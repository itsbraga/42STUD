/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annabrag <annabrag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 11:40:10 by annabrag          #+#    #+#             */
/*   Updated: 2023/05/04 19:38:21 by annabrag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

/*#include <stdio.h>

int		main(void)
{
	int		a = 80; // P
	int		b = 97; // a
	int		c = 109; // m
	int		d = 32; // space
	int		e = 126; // ~
	int		f = 61; // =

	printf("%d\n", ft_isalpha(a));
	printf("%d\n", ft_isalpha(b));
	printf("%d\n", ft_isalpha(c));
	printf("%d\n", ft_isalpha(d));
	printf("%d\n", ft_isalpha(e));
	printf("%d\n", ft_isalpha(f));
}*/
