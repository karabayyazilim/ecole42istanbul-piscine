/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarabay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 20:38:13 by akarabay          #+#    #+#             */
/*   Updated: 2021/11/07 20:44:58 by akarabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rotone(char *str)
{
	int index = 0;
	while(str[index] != '\0')
	{
		if ((str[index] >= 'A' && str[index] <= 'Y') || (str[index] >= 'a' && str[index] <= 'y'))
			str[index] += 1;
		else if (str[index] == 'Z' || str[index] == 'z')
			str[index] -= 25;
		write(1, &str[index], 1);
		index++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		rotone(av[1]);
	write(1, "\n", 1);
}
