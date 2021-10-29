/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarabay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 02:24:11 by akarabay          #+#    #+#             */
/*   Updated: 2021/10/29 02:24:18 by akarabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
/*
int	ft_str_is_lowercase(char *str);

int	main(void)
{
    char    deneme[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'i','v', 'L'};
    printf("%d", ft_str_is_lowercase(deneme));
	return (0);
}
*/
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 97 || str[i] > 122)
			return (0);
		i++;
	}
	return (1);
}
