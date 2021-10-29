/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarabay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 02:24:42 by akarabay          #+#    #+#             */
/*   Updated: 2021/10/29 02:24:46 by akarabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
/*
int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char    deneme[] = {'A', 'B', 'C', 'D', 'e', 'F', 'G', 'İ','V', 'L'};
	printf("%d", ft_str_is_uppercase(deneme));
	return (0);
}
*/
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 90)
			return (0);
		i++;
	}
	return (1);
}
