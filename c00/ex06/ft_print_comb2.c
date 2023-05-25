/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diodos-s <diodos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 10:49:31 by diodos-s          #+#    #+#             */
/*   Updated: 2023/02/08 10:31:44 by diodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_comb2(void)
{
	int		i;
	int		j;
	char	number[5];

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			number[0] = i / 10 + '0';
			number[1] = i % 10 + '0';
			number[2] = ' ';
			number[3] = j / 10 + '0';
			number[4] = j % 10 + '0';
			write(1, number, 5);
			if (i != 98)
			{
				write(1, ", ", 2);
			}
			j++;
		}
		i++;
	}
}

/*int main(void)
{
	ft_print_comb2();
	return(0);
}*/
