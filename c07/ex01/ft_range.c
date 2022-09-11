/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeonkim <gyeonkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 09:03:52 by gyeonkim          #+#    #+#             */
/*   Updated: 2022/09/09 09:15:10 by gyeonkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int *buff;
	int range;

	if (max <= min)
		return (0);
	range = max - min -1;
	i = 0;
	buff = malloc(range * sizeof(int));
	if (!buff)
		return (0);
	while (i <= range)
	{
		buff[i] = min + i;
		i++;
	}
	return (buff);
}

#include <stdio.h>

int main()
{
	int *ex01;
	ex01 = ft_range(15,30);
	for (int i = 0; i < 15; i++)
	{
		printf("%d ", ex01[i]);
	}
}
