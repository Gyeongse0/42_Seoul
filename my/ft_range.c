/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeonkim <gyeonkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 09:03:52 by gyeonkim          #+#    #+#             */
/*   Updated: 2022/09/14 09:24:06 by gyeonkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	long long	i;
	int			*buff;
	long long	range;

	if (max <= min)
		return (0);
	range = (long long)max - (long long)min;
	i = 0;
	buff = malloc(range * sizeof(int));
	if (!buff)
		return (0);
	while (i < range)
	{
		buff[i] = min + i;
		i++;
	}
	return (buff);
}
