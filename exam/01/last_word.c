/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarabay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 15:16:58 by akarabay          #+#    #+#             */
/*   Updated: 2021/11/07 15:42:33 by akarabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int        main(int ac, char **av)
{
    int index;
    char *lw;
    char *arr = av[1];

    index = 0;
    if (ac == 2)
    {
        while (arr[index] != '\0')
        {
            if (arr[index] <= 32 && arr[index + 1] > 32)
                lw = &arr[index + 1];
            index++;
        }
        index = 0;
        while (lw && lw[index] > 32)
        {
            write(1, &lw[index], 1);
            index++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
