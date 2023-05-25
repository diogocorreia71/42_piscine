/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diodos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 12:12:11 by diodos-s          #+#    #+#             */
/*   Updated: 2023/02/16 14:32:48 by diodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	a;

	i = 0;
	a = 0;
	while (src[a] != '\0')
		a++;
	if (size == 0)
		return (a);
	else
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (a);
}

/*int main(void)
{
	unsigned int s;
	char a[] = "ola";
	char b[] = "olaaa";

	s = 5;
	printf("%i\n", ft_strlcpy(b, a, s));
	printf("%s\n", a);
	printf("%s\n", b);
	return(0);
}*/
