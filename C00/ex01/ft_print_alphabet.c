/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeonkim <gyeonkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 02:46:54 by gyeonkim          #+#    #+#             */
/*   Updated: 2022/08/25 04:35:06 by gyeonkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)
{	
	char	b;

	b = 97;
	while (b <= 122)
	{
		write(1, &b, 1);
		b++;
	}	
}
