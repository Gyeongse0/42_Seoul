/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeonkim <gyeonkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 16:23:17 by gyeonkim          #+#    #+#             */
/*   Updated: 2022/09/01 21:17:07 by gyeonkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	char	*s_ptr;
	s_ptr = str;
	while(*str)
	{
		if (*str <= 'Z' && *str >= 'A')
			*str += 32;
		str++;
	}
	return (s_ptr);
}

char    *ift_strlowcase(char *str)
{
    int i;

	i = 0;
    while (str[i])
    {
        if (str[i] <= 'Z' && str[i] >= 'A')
		   	str[i] += 32;
        i++;
    }
    return (str);
}

int main()
{
	char	s04[11] = "helloworld";
	//char	*str = "helloworld";
	printf("\n=============== test 07 ===============\n");
	printf("HELLOWORLD\n");
	//str = ift_strlowcase(str);
	//printf("%s\n", str);
	printf("%s", ft_strlowcase(s04));
}
