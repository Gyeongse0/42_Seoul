/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab_quick.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeonkim <gyeonkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 01:26:08 by gyeonkim          #+#    #+#             */
/*   Updated: 2022/08/30 02:34:01 by gyeonkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	quicksort(left, right, pivot *tab, size)
{
	int temp;

	while(left < right)
	{
		if(tab[left] >= tab[pivot] || left == pivot || tab[right] <= tab[pivot] || right == pivot)
		{
			temp = tab[left];
			tab[left] = tab[right];
			tab[right] = temp;
		}

		if (tab[left] <= tab[pivot] && left != pivot)
		{
			left++;
		}
		if (tab[right] >= tab[pivot] && right != pivot)
		{
			right--;
		}
	}

}

void	ft_sort_int_tab_quick(int *tab, int size)
{
	int left;
    int right;
    int pivot;

	pivot = size / 2;
	left = 0;
	right = size - 1;

	quicksort(left, right, pivot tab, size);
}





int	main()
{
	int i;
	int arr[7] = {5,1,6,3,4,2,7};
	printf("정렬 전 : ");
	for(i = 0; i < 7; i++)
	{
		printf(%d ", arr[i]);
	}
	printf("\n");

	ft_sort_int_tab_quick(arr, 7);

	printf("정렬 후 : ");
	for(i = 0; i < 7; i++){
		printf(%d ", arr[i]);
	}

	return (0);
}
