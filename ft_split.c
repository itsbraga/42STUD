/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annabrag <annabrag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:28:21 by annabrag          #+#    #+#             */
/*   Updated: 2023/05/07 21:52:52 by panther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	im_a_sep(char to_check, char c)
{
	if (to_check == c)
		return (1);
	return (0);
}

static int	word_count(char const *str, char c)
{
	int		i;
	int		counter;

	i = 0;
	counter = 0;
	while (str[i])
	{
		if (!im_a_sep(str[i], c))
		{
			counter++;
			while (str[i] && !im_a_sep(str[i], c))
				i++;
		}
		else
			i++;
	}
	return (counter);
}

static void *free_split(void **s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int 	i;
	int		j;
	int		count;

    if (!s)
        return (NULL);
    count = word_count(s, c);
	split = (char **)malloc(sizeof(char *) * (count + 1));
	if (!split)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (!im_a_sep(s[i], c))
		{
            split[j++] = ft_strdup(&s[i]);
			if (!split[j])
				return (free_split((void **)split));
            while (s[i] && !im_a_sep(s[i], c))
                i++;
		}
		else
			i++;
	}
	return (split);
}

/*int	main(int argc, char **argv)
{
	int		i;
	char	**split = ft_split(argv[1], *argv[2]);
	
	i = 0;
	if (argc < 3)
		return (0);
	while (split[i])
		printf("%s\n", split[i++]);
	free(split);
}*/
