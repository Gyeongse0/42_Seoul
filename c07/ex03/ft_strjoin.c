/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeonkim <gyeonkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 20:05:02 by gyeonkim          #+#    #+#             */
/*   Updated: 2022/09/11 22:01:07 by gyeonkim         ###   ########.fr       */
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

int	final_word_len(char **str, size, char *sep)
{
	int	final_len;
	int	i;
	int sep_len;

	final_len = 0;
	i = 0;
	sep_len = ft_word_len(sep);
	while (i < size)
	{
		final_len += ft_word_len(str[i]);
		final_len += sep_len;
		i++;
	}
	final_len -= ft_word_len(sep);
	return (final_len);
}

char	*ft_strcpy_point(char *dest, char *src, char *moving_point)
{
	int	i;
	
	i = 0;



char *ft_strjoin(int size, char **strs, char *sep)
{
	int	i;
	char *final_string;
	char *moving_point;

	final_string = (int *)malloc(sizeof(int) *  final_word_len(strs, size, sep));
	if (!(final_len))
		return (0);
	i = 0;
	moving_point = final_string;
	while (i < size)
	{
		ft_strcpy_point(strs[i], final_string, moving_point);
		i++;
	}

