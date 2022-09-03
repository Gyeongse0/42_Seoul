/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sstrupcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeonkim <gyeonkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 16:23:17 by gyeonkim          #+#    #+#             */
/*   Updated: 2022/09/01 22:15:03 by gyeonkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	char	*s_ptr;
	s_ptr = str;
	while(*str)
	{
		if (*str <= 'z' && *str >= 'a')
			*str -= 32;
		str++;
	}
	return (s_ptr);
}

char    *ift_strupcase(char *str)
{
    int i;

	i = 0;
    while (str[i])
    {
        if (str[i] <= 'z' && str[i] >= 'a')
		   	str[i] -= 32;
        i++;
    }
    return (str);
}

int main()
{
	//char	s04[11] = "helloworld";
	char	*str;
	str = "helloworld";
	printf("\n=============== test 07 ===============\n");
	printf("HELLOWORLD\n");
	//str = ift_strupcase(str);
	//printf("%s\n", str);
	printf("%s", ift_strupcase(str));
}
