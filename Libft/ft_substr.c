/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panther <anbraga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 12:23:18 by panther           #+#    #+#             */
/*   Updated: 2023/05/06 16:39:38 by panther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *ext;

    if (!s)
        return (NULL);
    ext = (char *)malloc(sizeof(char *) * (len + 1));
    if (!ext)
        return (NULL);
    if ((size_t)start >= ft_strlen(s))
        start = ft_strlen(s);
    if (len > ft_strlen(s) - start)
    {
        len = ft_strlen(s) - start;
        ext = (char *)malloc(len + 1);
    }
    ft_memcpy(ext, s + start, len);
    ext[len] = 0;
    return (ext);
}

/*int main(int argc, char **argv)
{
    int ret_atoi1;
    int ret_atoi2;

    if (argc > 3)
    {
        ret_atoi1 = atoi(argv[2]);
        ret_atoi2 = atoi(argv[3]);
        printf("L'extraction obtenue est: %s\n", ft_substr(argv[1], ret_atoi1, ret_atoi2));
    }
}*/
