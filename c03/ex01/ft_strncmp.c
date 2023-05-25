/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diodos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 18:25:13 by diodos-s          #+#    #+#             */
/*   Updated: 2023/02/19 12:04:30 by diodos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
	{
		return (0);
	}
	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0')
		&& (i < n - 1))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*int main(void)
{
	unsigned qtd;
	qtd = 6;
	char str1[] = "abcdef";
	char str2[] = "abcdeg";
	printf("%d\n", ft_strncmp(str1, str2, qtd));
}*/
