/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeonkim <gyeonkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 17:13:17 by gyeonkim          #+#    #+#             */
/*   Updated: 2022/09/10 20:52:48 by gyeonkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	if (nb > 0)
	{
		i = nb * ft_recursive_factorial(nb - 1);
	}
	return (i);
}
