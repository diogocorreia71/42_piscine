/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diodos-s <diodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 17:19:15 by aalmada-          #+#    #+#             */
/*   Updated: 2023/02/05 12:06:13 by diodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a, char b, char c, int k);

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		ft_putchar('o', '-', 'o', x);
		while (y >= 3)
		{
			write (1, "\n", 1);
			ft_putchar('|', ' ', '|', x);
			y--;
		}
		if (y == 2)
		{
			write (1, "\n", 1);
			ft_putchar('o', '-', 'o', x);
		}
	}
}
