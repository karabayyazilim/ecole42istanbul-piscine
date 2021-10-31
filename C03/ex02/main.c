/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarabay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 17:12:59 by akarabay          #+#    #+#             */
/*   Updated: 2021/10/30 17:37:34 by akarabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcat(char *dest, char *src);

int main() {
    
    char dest[] = "ali";
    char src[] = " karabay";
    
    printf("%s", ft_strcat(dest, src));
    
    return 0;
}
