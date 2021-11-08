/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarabay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 13:37:19 by akarabay          #+#    #+#             */
/*   Updated: 2021/11/07 13:51:03 by akarabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		char *av = argv[1];
		int index = 0;
		while (av[index] != '\0')
		{
			if(av[index] == 'a')
				write(1,&av[index], 1);
			index++;
		}
		write(1, "\n", 1);
	}
	else
		write(1, "a\n", 1);
}
