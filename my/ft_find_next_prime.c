/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeonkim <gyeonkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 18:37:39 by gyeonkim          #+#    #+#             */
/*   Updated: 2022/09/11 10:45:57 by gyeonkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_prime2(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	else if (nb >= 2)
	{
		while (i <= nb / i)
		{
			if (nb % i == 0)
				return (0);
			i++;
		}
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 1;
	if (nb < 2)
		return (2);
	while (nb >= 2)
	{
		if (ft_is_prime2(nb) == 1)
			return (nb);
		nb++;
	}
	return (0);
}
