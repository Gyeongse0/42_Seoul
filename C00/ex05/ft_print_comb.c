/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeonkim <gyeonkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 10:01:03 by gyeonkim          #+#    #+#             */
/*   Updated: 2022/08/25 11:31:30 by gyeonkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char 	c;

	a = 48;
	b = a + 1;
	c = b + 1;
	while( a<b ){
		b = a + 1;
		while( b<c ){
			c = b + 1;
			while( c<=57 ){
				write( 1,&a,1 );
				write( 1,&b,1 );
				write( 1,&c,1 );
				if( a!=2 )
					write(1, ", ", 2);
				c++;
			}
			b++;
		}
		a++;
	}
}
