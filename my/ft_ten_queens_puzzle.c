/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeonkim <gyeonkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 22:43:03 by gyeonkim          #+#    #+#             */
/*   Updated: 2022/09/10 18:03:08 by gyeonkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	init_array(int *array)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		array[i] = 0;
		i++;
	}
}

void	print_queens(int *board)
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = board[i] + 48;
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

int	validation(int *board, int *col, int y_pos, int x_pos)
{
	int	i;

	i = 0;
	if (col[x_pos] == 1)
		return (0);
	while (i < y_pos)
	{
		if ((x_pos - board[i]) == (y_pos - i))
			return (0);
		else if ((x_pos - board[i]) == -(y_pos - i))
			return (0);
		i++;
	}
	return (1);
}

void	put_queens(int *board, int *col, int row, int *count)
{
	int	i;

	i = 0;
	if (row == 10)
	{
		*count += 1;
		print_queens(board);
	}
	while (i < 10)
	{
		if (validation(board, col, row, i) == 1)
		{
			board[row] = i;
			col[i] = 1;
			put_queens(board, col, row + 1, count);
			board[row] = 0;
			col[i] = 0;
		}
		i++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	board[10];
	int	col[10];
	int	count;
	int	row;

	count = 0;
	row = 0;
	init_array(board);
	init_array(col);
	put_queens(board, col, row, &count);
	return (count);
}
