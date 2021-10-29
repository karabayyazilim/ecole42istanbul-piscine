/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarabay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 02:26:13 by akarabay          #+#    #+#             */
/*   Updated: 2021/10/29 02:26:36 by akarabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
/*
char	*ft_strlowcase(char *str);

int	main(void)
{
	char	deneme[] = {'o', 'n', 'b', 'c', 'A', 'l', 'i'};
	printf("%s",ft_strlowcase(deneme));
	return (0);
}
*/
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 || str[i] <= 90) && (str[i] < 97 || str[i] > 122))
			str[i] += 32;
		i++;
	}
	return (str);
}
