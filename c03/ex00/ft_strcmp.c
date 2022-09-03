/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeonkim <gyeonkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 21:38:26 by gyeonkim          #+#    #+#             */
/*   Updated: 2022/09/03 23:14:26 by gyeonkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while((s1[i] && s2[i]) && (s1[i] == s2[i]))
	{
		i++;
	}		
	return (s1[i] - s2[i]);
}

int main()
{
	char s1[6];
	char s2[6];
	int t;

	s1 = "hello";
	s2 = "herlo";

	t = ft_strcmp(s1, s2);
	printf(" %d", t);
}
