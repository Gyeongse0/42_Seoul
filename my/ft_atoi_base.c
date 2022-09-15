/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeonkim <gyeonkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 21:01:12 by gyeonkim          #+#    #+#             */
/*   Updated: 2022/09/06 23:13:34 by gyeonkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	exception_handling(char *str)
{
	int	len;
	int	i;
	int	j;

	len = ft_strlen(str);
	i = 0;
	if (len == 1 || str[0] == '\0')
		return (0);
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+')
			return (0);
		if ((str[i] <= 13 && str[i] >= 9) || str[i] == 32)
			return (0);
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

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

int	check_base(char c, char *base)
{
	int	j;

	j = 0;
	while (base[j])
	{
		if (c == base[j])
			return (j);
		j++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	answer;
	int	base_len;

	i = 0;
	answer = 0;
	sign = igspace_checksign(str, &i);
	base_len = ft_strlen(base);
	if (exception_handling(base))
	{
		while (str[i] && (check_base(str[i], base) != -1))
		{
			answer *= base_len;
			answer += check_base(str[i], base);
			i++;
		}
	}
	answer *= sign;
	return (answer);
}
