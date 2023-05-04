/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annabrag <annabrag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:27:04 by annabrag          #+#    #+#             */
/*   Updated: 2023/05/03 19:59:23 by annabrag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*calloc(size_t nmemb, size_t size)
{
	void	*ret;

	if (!nmemb || !size)
		return (malloc(1));
	/*
	ou:
		if (!nmemb || !size)
			return (ft_calloc(1, 1);
	ainsi, on retourne un ptr sur 0 qui est equivaut a (null) en ASCII, et
	pourra etre free pour la suite
	*/
	ret = malloc(nmemb * size);
	if (!ret)
		return (NULL);
}
