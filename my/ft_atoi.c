/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeonkim <gyeonkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 21:42:33 by gyeonkim          #+#    #+#             */
/*   Updated: 2022/09/06 22:50:55 by gyeonkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	igspace_checksign(char *str, int *p_i)
{
	int	sign;
	int	i;

	i = 0;
	sign = 1;
	while (str[i] && ((str[i] <= 13 && str[i] >= 9) || str[i] == 32))
			i++;
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	*p_i = i;
	return (sign);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	answer;

	i = 0;
	answer = 0;
	sign = igspace_checksign(str, &i);
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		answer *= 10;
		answer += str[i] - '0';
		i++;
	}
	answer *= sign;
	return (answer);
}
