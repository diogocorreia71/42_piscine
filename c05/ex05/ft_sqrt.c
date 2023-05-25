/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diodos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 15:59:29 by diodos-s          #+#    #+#             */
/*   Updated: 2023/02/20 12:34:00 by diodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
		return (0);
	while (i * i < nb && i <= 46341)
		i++;
	if (i * i == nb)
		return (i);
	else
		return (0);
}

/*int main(void)
{
	int i;

	i = 25;
	printf("%d\n", ft_sqrt(i));
}*/
