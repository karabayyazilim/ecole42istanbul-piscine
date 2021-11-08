/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarabay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 15:02:07 by akarabay          #+#    #+#             */
/*   Updated: 2021/11/07 15:16:27 by akarabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	int index = 0;

	if(ac == 2)
	{
		char *arr = av[1];
		while(arr[index] == ' ' || arr[index] == '\t')
			index++;
		while(arr[index] != '\0' && arr[index] != ' ' && arr[index] != '\t')
		{
			write(1, &arr[index], 1);
			index++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
