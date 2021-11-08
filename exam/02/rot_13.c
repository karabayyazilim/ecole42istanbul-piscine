/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarabay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 20:20:27 by akarabay          #+#    #+#             */
/*   Updated: 2021/11/07 20:35:04 by akarabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void rot_13(char *str)
{
	int index = 0;
	while(str[index] != '\0')
	{		
		if ((str[index] >= 'A' && str[index] <= 'M') || (str[index] >= 'a' && str[index] <= 'm'))
			str[index] += 13;
		else if ((str[index] >= 'N' && str[index] <= 'Z') || (str[index] >= 'n' && str[index] <= 'z'))
			str[index] -= 13;
		write(1, &str[index], 1);
		index++;
	}
}	
		

int main(int ac, char **av)
{
	if(ac == 2)
		rot_13(av[1]);
	write(1, "\n", 1);
}
