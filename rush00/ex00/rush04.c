/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjolee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 11:27:23 by minjolee          #+#    #+#             */
/*   Updated: 2022/08/28 12:03:33 by minjolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	check_int(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		write(1, "Only positive integers available", 32);
		return (-1);
	}
	else
		return (0);
}

void	fst_floor(int x, int m_w)
{
	if (m_w == 0)
		ft_putchar('A');
	else if (m_w == x - 1)
		ft_putchar('C');
	else
		ft_putchar('B');
}

void	lst_floor(int x, int m_w)
{
	if (m_w == 0)
		ft_putchar('C');
	else if (m_w == x - 1)
		ft_putchar('A');
	else
		ft_putchar('B');
}

void	middle_floor(int x, int m_w)
{
	if (m_w == 0 || m_w == x - 1)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	m_w;
	int	m_h;

	m_w = 0;
	m_h = 0;
	if (check_int(x, y) == 0)
	{	
		while (m_h < y)
		{
			m_w = 0;
			while (m_w < x)
			{
				if (m_h == 0)
					fst_floor(x, m_w);
				else if (m_h == y - 1)
					lst_floor(x, m_w);
				else
					middle_floor(x, m_w);
				m_w++;
			}
			ft_putchar('\n');
			m_h++;
		}
	}	
}
