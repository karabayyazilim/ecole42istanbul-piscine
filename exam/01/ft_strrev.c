/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarabay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 16:44:43 by akarabay          #+#    #+#             */
/*   Updated: 2021/11/07 16:57:36 by akarabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int len = 0;
	while(str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strrev(char *str)
{
	int index = 0;
	int len = ft_strlen(str) - 1;
   	char tpm;
	
	while(len > index)
	{
		tpm = str[index];
		str[index] = str[len];
		str[len] = tpm;
		index++;
		len--;
	}
	return (str);
}	

int main(void)
{
	char str[] = "ali karabay";
	printf("%s", ft_strrev(str));
	write(1, "\n", 1);
}
