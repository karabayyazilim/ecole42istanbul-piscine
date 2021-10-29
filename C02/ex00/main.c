/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarabay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 12:23:21 by akarabay          #+#    #+#             */
/*   Updated: 2021/10/28 13:27:57 by akarabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char *ft_strcpy(char *dest, char *src);

void ft_putstr(char n)
{
	write(1, &n, 1);
}

int main(void)
{
	char a[1], b[] = "ali";

	ft_strcpy(a, b);

	ft_putstr(a[0]);
}
