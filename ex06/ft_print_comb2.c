/* ************************************************************************** */

/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeonkim <gyeonkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 12:38:58 by gyeonkim          #+#    #+#             */
/*   Updated: 2022/08/25 14:52:20 by gyeonkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_print_comb2(void)
{
	char count_arr[2];

	count_arr[0] = '0';
	count_arr[1] = '0';

	while (count_arr[0] <= '9')
	{
		while (count_arr[1] <='9')
		{
			write( 1, &count_arr[0], 1);
			write( 1, &count_arr[1], 1);
			count_arr[1] += 1;
		}
		count_arr[0] += 1;
	}
}

