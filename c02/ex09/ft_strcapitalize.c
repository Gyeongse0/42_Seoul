/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeonkim <gyeonkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 20:33:20 by gyeonkim          #+#    #+#             */
/*   Updated: 2022/09/01 22:06:04 by gyeonkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

char		*ft_strcapitalize(char *str)
{
	int	cap_flag;
	int	i;

	i = 0;
	cap_flag = 1;
	while(str[i])
	{
		if (cap_flag == 1 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
			cap_flag = 0;
		}
		else if (cap_flag == 0 && str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (!(str[i] >= 'A' && str[i] <= 'Z') && !(str[i] >= 'a' && str[i] <= 'z'))
			cap_flag = 1;
		i++;
	}
	return(str);
}

int main()
{
	char	s09[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("\n=============== test 09 ===============\n");
	printf("Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un\n");
	printf("%s", ft_strcapitalize(s09));
	
	return 0;
}
