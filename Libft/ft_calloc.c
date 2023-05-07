/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annabrag <annabrag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:27:04 by annabrag          #+#    #+#             */
/*   Updated: 2023/05/04 19:47:07 by annabrag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ret;

	if (!nmemb || !size)
		return (ft_calloc(1, 1));
	ret = malloc(nmemb * size);
	if (!ret)
		return (NULL);
	ft_bzero(ret, (nmemb * size));
	return (ret);
}
