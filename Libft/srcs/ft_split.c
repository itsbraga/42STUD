/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annabrag <annabrag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:28:21 by annabrag          #+#    #+#             */
/*   Updated: 2023/05/05 21:55:32 by annabrag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	im_a_sep(char to_check, char c)
{
	if (to_check == c)
		return (1);
	return (0);
}

static int	ft_strlen2(char const *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
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

char	*ft_strdup2(char const *str, char c)
{
	char	*dup;
	int		i;
	int		slen;

	slen = ft_strlen2(str);
	dup = malloc(sizeof(char const *) * (slen + 1));
	if (!dup)
		return (NULL);
	if (!str)
		return (NULL);
	i = 0;
	while (str[i] && !im_a_sep(str[i], c))
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

static void	free_split(void **s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		free_split(s[i]);
		i++;
	}
	free_split(s);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		i;
	int		j;
	int		count;

	count = word_count(s, c);
	split = (char **)malloc(sizeof(char *) * (count + 1));
	if (!split || !s)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (!im_a_sep(s[i], c))
		{
			split[j++] = ft_strdup2(&s[i], c);
			if (!split[j++])
				return (free_split(split));
			while (s[i] && !im_a_sep(s[i], c))
				i++;
		}
		else
			i++;
	}
	split[j] = NULL;
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
