/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panther <anbraga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 18:14:59 by panther           #+#    #+#             */
/*   Updated: 2023/05/06 19:41:08 by panther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char    *s_copy;
    size_t  i;

    if (!s || !f)
        return (NULL);
    if (!(s_copy = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))))
        return (NULL);
    i = 0;
    while (i < ft_strlen(s))
    {
        s_copy[i] = f(i, s[i]);
        i++;
    }
    s_copy[i] = '\0';
    return (s_copy);
}

/*char    f(unsigned int i, char c)
{
	char        res;

    res = (char)(i + (unsigned int)c) + 1;
	return (res);
}

int main(void)
{
    char    s[] = "abc";
    char    *s_copy;
	s_copy = ft_strmapi(s, *f);
	printf("%s\n", s_copy);
}*/
