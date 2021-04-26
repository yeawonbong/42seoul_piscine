/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 21:44:59 by ybong             #+#    #+#             */
/*   Updated: 2020/11/26 23:51:32 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_num(char x, char y, char z)
{
	if (x < y && y < z)
	{
		write(1, &x, 1);
		write(1, &y, 1);
		write(1, &z, 1);
		if (x < '7')
		{
			write(1, ", ", 2);
		}
	}
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0';
	b = '0';
	c = '0';
	while (a <= '7')
	{
		while (b <= '8')
		{
			while (c <= '9')
			{
				write_num(a, b, c);
				c++;
			}
			b++;
			c = '0';
		}
		a++;
		b = '0';
	}
}
