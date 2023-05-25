/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diodos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:44:21 by diodos-s          #+#    #+#             */
/*   Updated: 2023/02/16 15:34:04 by diodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	*hexd;
	int		a;

	hexd = "0123456789abcdef";
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 31 && str[i] >= 0)
		{
			a = str[i];
			write(1, "\\", 1);
			write(1, &hexd[a / 16], 1);
			write(1, &hexd[a % 16], 1);
		}
		if (str[i] >= 32)
		{
			write(1, & str[i], 1);
		}
		i++;
	}
}

/*int main(void)
{
	char str[] = "Ola\nesta bem?";
	ft_putstr_non_printable(str);
	return (0);
}*/
