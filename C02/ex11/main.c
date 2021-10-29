/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarabay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 15:57:21 by akarabay          #+#    #+#             */
/*   Updated: 2021/10/29 16:12:35 by akarabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_putstr_non_printable(char *str);

int main(void)
{
	char	*string = "Coucou\\ntu vas bien ?";

	printf("%s", string);
}
