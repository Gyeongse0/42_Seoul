/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeonkim <gyeonkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 17:02:01 by gyeonkim          #+#    #+#             */
/*   Updated: 2022/09/14 20:21:16 by gyeonkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ch_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_str(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (ch_sep(str[0], charset) == 0)
			count++;
	while (str[i + 1])
	{
		if (ch_sep(str[i], charset) == 1 && ch_sep(str[i + 1], charset) == 0)
			count++;
		i++;
	}
	return (count);
}

char	*put_words(char *str, char *charset, int *i)
{
	int		len;
	int		j;
	char	*word;
	int		s_i;

	len = 0;
	j = 0;
	s_i = *i;
	while (str[*i] && ch_sep(str[*i], charset) == 0)
	{
		*i += 1;
		len++;
	}
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!(word))
		return (0);
	while (str[s_i] && !ch_sep(str[s_i], charset))
	{
		word[j] = str[s_i];
		s_i += 1;
		j++;
	}
	word[j] = 0;
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**string;
	int		i;
	int		j;

	i = 0;
	j = 0;
	string = (char **)malloc(sizeof(char *) * (count_str(str, charset) + 1));
	if (!(string))
		return (0);
	while (str[i])
	{
		while (str[i] && ch_sep(str[i], charset))
			i++;
		if (str[i])
		{
			string[j] = put_words(str, charset, &i);
			i++;
			j++;
		}
	}
	string[j] = 0;
	return (string);
}
