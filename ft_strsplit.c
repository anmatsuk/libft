/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatsuk <matsuknastya@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/19 16:23:48 by amatsuk           #+#    #+#             */
/*   Updated: 2017/06/19 16:23:50 by amatsuk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

size_t		count_words(char const *str, char c)
{
	size_t	count;
	int		f;
	size_t	i;

	count = 0;
	i = 0;
	f = 1;
	while (*(str + i))
	{
		if (*(str + i) != c && f)
		{
			count++;
			f = 0;
		}
		else if (*(str + i) == c)
			f = 1;
		i++;
	}
	return (count);
}

size_t		get_next_word_pos(const char *str, size_t pos, char c)
{
	while (str[pos] == c && str[pos] != '\0')
		pos++;
	return (pos);
}

size_t		get_word_length(const char *str, size_t pos, char c)
{
	size_t length;

	length = 0;
	while (str[pos + length] != c && str[pos + length] != '\0')
		length++;
	return (length);
}

char		*set_word(const char *str, size_t *pos, char c)
{
	size_t	l;
	size_t	p;
	size_t	i;
	char	*res;

	p = get_next_word_pos(str, *pos, c);
	l = get_word_length(str, p, c);
	res = (char*)malloc(sizeof(char) * (l + 1));
	if (res == NULL)
		return (NULL);
	i = 0;
	while (i < l)
	{
		res[i] = str[p + i];
		i++;
	}
	res[i] = '\0';
	*pos = p + l;
	return (res);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**res;
	size_t	p;
	size_t	i;
	size_t	words;

	i = 0;
	p = 0;
	if (!s)
		return (NULL);
	words = count_words(s, c);
	res = (char **)malloc(sizeof(char*) * (words + 1));
	if (res == NULL)
		return (NULL);
	while (i < words)
	{
		res[i] = set_word(s, &p, c);
		i++;
	}
	res[i] = 0;
	return (res);
}
