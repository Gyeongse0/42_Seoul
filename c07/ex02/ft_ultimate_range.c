/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeonkim <gyeonkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 15:07:59 by gyeonkim          #+#    #+#             */
/*   Updated: 2022/09/11 20:00:58 by gyeonkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int size;

	if (min >= max)
		return (0);
	size = max - min + 1;
	*range = malloc(size * sizeof(int) + 1);
	if(!(*range))
		return (0);
	i = 0;
	while (i <= size)
	{
		*range[i] = min + i;
		i++;
	}
	return (size);
}
#include <assert.h>
#include <string.h>
#include <stdio.h>

int main()
{
	int *ex02;
	int ex02_ret;
	ex02_ret = ft_ultimate_range(&ex02, -10, -5);
	assert(ex02_ret == 5);
	for (int i = 0; i < 5; i++)
	{
		assert(ex02[i] == -10 + i);
	}
	ex02_ret = ft_ultimate_range(&ex02, 10, -5);
	assert(ex02_ret == 0);
	assert(ex02 == NULL);}

