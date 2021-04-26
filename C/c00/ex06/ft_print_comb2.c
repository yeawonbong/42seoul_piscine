/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 05:14:56 by ybong             #+#    #+#             */
/*   Updated: 2020/11/30 07:56:18 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_num(char numarr[4])
{
	write(1, &numarr[0], 2);
	write(1, " ", 1);
	write(1, &numarr[2], 2);
}

void	ft_print_comb2(void)
{
	int		num1;
	int		num2;
	char	numarr[4];

	num1 = 0;
	num2 = 1;
	while (num1 < 99)
	{
		num2 = num1 + 1;
		while (num2 < 100)
		{
			numarr[0] = (num1 / 10) + 48;
			numarr[1] = (num1 % 10) + 48;
			numarr[2] = (num2 / 10) + 48;
			numarr[3] = (num2 % 10) + 48;
			print_num(numarr);
			if (num1 > 97 && num2 > 98)
				break ;
			num2++;
			write(1, ", ", 2);
		}
		num1++;
	}
}
