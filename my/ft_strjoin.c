/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeonkim <gyeonkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 20:05:02 by gyeonkim          #+#    #+#             */
/*   Updated: 2022/09/14 04:45:55 by gyeonkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_word_len(char *word)
{
	int	i;

	i = 0;
	while (word[i])
	{
		i++;
	}
	return (i);
}

int	f_wd_len(char **str, int size, char *sep)
{
	int	final_len;
	int	i;
	int	sep_len;

	final_len = 0;
	i = 0;
	sep_len = ft_word_len(sep);
	while (i < size)
	{
		final_len += ft_word_len(str[i]);
		final_len += sep_len;
		i++;
	}
	final_len -= sep_len;
	return (final_len);
}

void	ft_strcpy_point(char *dest, char *src, int *mv_point)
{
	char	*res;

	res = dest;
	while (*src)
	{
		dest[*mv_point] = *src;
		src++;
		*mv_point += 1;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*f_string;
	char	*zero_size;
	int		mv_point;

	if (size == 0)
	{
		zero_size = (char *)malloc(sizeof(char) * 1);
		zero_size[0] = 0;
		return (zero_size);
	}
	f_string = (char *)malloc(sizeof(char) * (f_wd_len(strs, size, sep) + 1));
	if (!(f_string))
		return (0);
	i = 0;
	mv_point = 0;
	while (i < size)
	{
		ft_strcpy_point(f_string, strs[i], &mv_point);
		if (i < size - 1)
			ft_strcpy_point(f_string, sep, &mv_point);
		i++;
	}
	f_string[mv_point] = 0;
	return (f_string);
}
