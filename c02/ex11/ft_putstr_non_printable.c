/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeonkim <gyeonkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 21:39:23 by gyeonkim          #+#    #+#             */
/*   Updated: 2022/09/03 22:44:09 by gyeonkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
    {
		if (str[i] != 127 && str[i] >= 32)
			ft_putchar(str[i]);
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcde"[str[i] / 16]);
			ft_putchar("0123456789abcde"[str[i] % 16]);
		}
		i++;
	}
}

int main()
{
		char	s11[21] = "Coucou\ntu vas bien ?";
		printf("\n=============== test 11 ===============\n");
		printf("Coucou\\0atu vas bien ?\n");
		ft_putstr_non_printable(s11);
}
