/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeonkim <gyeonkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 22:23:32 by gyeonkim          #+#    #+#             */
/*   Updated: 2022/09/14 17:21:15 by gyeonkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

long long	ft_strlen(char *str);
int			exception_handling(char *str);
int			igspace_checksign(char *str, int *p_i);
int			check_base(char c, char *base);
int			ft_atoi_base(char *str, char *base);

int	need_len(int base_len, long long nbr)
{
	int			need_len;
	long long	num;

	need_len = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
	{
		num = (long long)nbr * -1;
		need_len++;
	}
	else
		num = (long long)nbr;
	while (num / base_len)
	{
		num /= base_len;
		need_len++;
	}
	return (need_len);
}

void	minus_num(long long *num, char *string, long long *nbr, int *m_flag)
{
	if (*num < 0)
	{
		string[0] = '-';
		*nbr = *num * -1;
		*m_flag = 1;
	}
	else
		*nbr = *num;
}

char	*put_nbr_str(long long num, char *string, char *base, int len)
{
	long long	nbr;
	long long	base_len;
	int			m_flag;

	base_len = ft_strlen(base);
	m_flag = 0;
	minus_num(&num, string, &nbr, &m_flag);
	len--;
	while (nbr >= base_len)
	{
		string[len] = base[nbr % base_len];
		nbr = nbr / base_len;
		len--;
	}
	if (nbr < base_len)
	{
		if (m_flag == 0)
			string[0] = base[nbr];
		else
			string[1] = base[nbr];
	}
	return (string);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long long	num;
	char		*string;
	int			len;
	int			base_len;

	if (!(exception_handling(base_from)) && !(exception_handling(base_to)))
		return (0);
	num = (long long)ft_atoi_base(nbr, base_from);
	base_len = ft_strlen(base_to);
	len = need_len(base_len, num);
	string = (char *)malloc(sizeof(char) * len + 1);
	if (!(string))
		return (0);
	put_nbr_str(num, string, base_to, len);
	string[len] = 0;
	return (string);
}
