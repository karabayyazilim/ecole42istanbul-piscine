/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarabay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 13:34:44 by akarabay          #+#    #+#             */
/*   Updated: 2021/10/28 13:48:31 by akarabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

void ft_putstr(char n)
{
	write(1, &n, 1);
}

int main(void)
{
	char dest[] = "", src[] = {"ali karabay"}, n = 5;

	ft_strncpy(dest, src, n);

	ft_putstr(dest[0]);
}
