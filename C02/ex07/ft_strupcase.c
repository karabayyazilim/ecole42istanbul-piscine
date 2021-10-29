/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarabay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 02:25:44 by akarabay          #+#    #+#             */
/*   Updated: 2021/10/29 02:25:49 by akarabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
/*
char	*ft_strupcase(char *str);

int main (void)
{
	char	deneme[] = {'o', 'n', 'E', 'R', 'A', 'l', 'i'};
	printf("%s",ft_strupcase(deneme));
	return (0);
}
*/
char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 97 || str[i] <= 122) && (str[i] < 65 || str[i] > 90))
			str[i] -= 32;
		i++;
	}
	return (str);
}
