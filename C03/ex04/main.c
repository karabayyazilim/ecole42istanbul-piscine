/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarabay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 10:58:47 by akarabay          #+#    #+#             */
/*   Updated: 2021/10/31 11:03:39 by akarabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strstr(char *str, char *to_find);

int main(void)
{
	char str[] = "ali karabay";
	char to_find[] = "li";

	printf("%s", ft_strstr(str, to_find));
}
