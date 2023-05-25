/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diodos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 08:41:46 by diodos-s          #+#    #+#             */
/*   Updated: 2023/02/15 08:51:12 by diodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i != size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			ft_swap(&tab[i], &tab[i + 1]);
			i = 0;
		}
		else
		{
			i++;
		}
	}
}

/*void putarr(int arr[], int size)
{
        for (int i = 0; i < (size - 1); i++)
                printf("%d, ", arr[i]);
        printf("%d\n", arr[size - 1]);
}

int             main(void)
{
        int tab[] = {3, 5, 1, 6, 2};
        int size;

        size = 5;

        printf("Original: ");
        putarr(tab, size);

        ft_sort_int_tab(tab, size);

        printf("Modified: ");
        putarr(tab, size);
}*/
