/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarabay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 14:36:19 by akarabay          #+#    #+#             */
/*   Updated: 2021/10/30 14:36:57 by akarabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
	char s1[] = "merhaba";
	char s2[] = "alii";


    printf("ft : %d\n", ft_strncmp(s1, s2, 2));
}
