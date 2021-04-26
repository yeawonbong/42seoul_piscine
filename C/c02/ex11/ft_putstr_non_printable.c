/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 19:10:35 by ybong             #+#    #+#             */
/*   Updated: 2020/12/07 19:58:37 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	unsigned int		i;
	unsigned int		temp;
	char				*hex;

	i = 0;
	hex = "0123456789abcdef";
	while (str[i])
	{
		if (str[i] < 32 || str[i] == 127)
		{
			temp = str[i];
			write(1, "\\", 1);
			write(1, &hex[temp / 16], 1);
			write(1, &hex[temp % 16], 1);
			write(1, "\n", 1);
			i++;
		}
		else
		{
			write(1, &str[i], 1);
			i++;
		}
	}
}
