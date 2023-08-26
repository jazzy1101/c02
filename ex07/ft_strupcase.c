/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darambae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 21:49:24 by darambae          #+#    #+#             */
/*   Updated: 2023/08/26 22:18:36 by darambae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	i;
	char	buffer;

	i = 0;
	while (*str)
	{
		if(str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}

void	ft_putstr(char *str)
{
	int l;

	l = 0;
	while (str[l])
	{
		l++;
	}
	write(1, str, l);
}

int		main()
{
	char c[] = "AbCdEfG-Yz";
	ft_putstr("ABCDEFG-YZ:");
	ft_putstr(ft_strupcase(c));
	ft_putstr(":");
	ft_putstr(c);
}
