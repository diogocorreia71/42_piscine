/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diodos-s <diodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 12:22:44 by aalmada-          #+#    #+#             */
/*   Updated: 2023/02/04 17:43:12 by diodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a, char b, char c, int k);

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		ft_putchar('A', 'B', 'C', x);
		while (y >= 3)
		{
			write (1, "\n", 1);
			ft_putchar('B', ' ', 'B', x);
			y--;
		}
		if (y == 2)
		{
			write (1, "\n", 1);
			ft_putchar('C', 'B', 'A', x);
		}
	}
}
