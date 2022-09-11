/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeonkim <gyeonkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 12:25:13 by gyeonkim          #+#    #+#             */
/*   Updated: 2022/09/11 15:06:03 by gyeonkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		index;

	index = 0;

	dest = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
	if (!dest)
		return (0);
	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

#include <assert.h>
#include <stdio.h>
#include <string.h>

int main(){
	char *ex00;
	ex00 = ft_strdup("HELLO WORLD");
	assert(strcmp(ex00, "HELLO WORLD") == 0);

	ex00 = ft_strdup("");
	assert(strcmp(ex00, "") == 0);
}
