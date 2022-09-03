/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeonkim <gyeonkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 13:40:41 by gyeonkim          #+#    #+#             */
/*   Updated: 2022/09/01 16:22:50 by gyeonkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int		ft_str_is_printfable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (*str)
	{
		if ((0 <= *str && *str <= 31) || *str == 127)
			return (0);
		else
			str++;
	}
	return (1);
}

int		main()
{
	char *str1;
	char *str2;
	int a;
	int b;

	a = 3;
	b = 3;
	str1 = "HELLO";
	str2 = "HEL1O";
	a = ft_str_is_printable(str1);
	b = ft_str_is_printable(str2);
	printf("a = %d \n", a);
	printf("b = %d \n", b);
}
