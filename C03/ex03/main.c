/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarabay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 10:41:33 by akarabay          #+#    #+#             */
/*   Updated: 2021/10/31 10:45:06 by akarabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main(void)
{
	char dest[] = "";
	char src[] = "ali karabay";
	printf("%s", ft_strncat(dest, src, 5));
}
