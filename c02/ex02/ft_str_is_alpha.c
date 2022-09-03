/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeonkim <gyeonkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 13:40:41 by gyeonkim          #+#    #+#             */
/*   Updated: 2022/09/01 15:42:53 by gyeonkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int		ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (*str)
	{
		if ((('A' <= *str && *str <= 'Z') || ('a' <= *str && *str <= 'z')))
			str++;
		else
			return (0);
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
	str1 = "hello";
	str2 = "he220";
	a = ft_str_is_alpha(str1);
	b = ft_str_is_alpha(str2);
	printf("a = %d \n", a);
	printf("b = %d \n", b);
}
