/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 04:05:09 by ybong             #+#    #+#             */
/*   Updated: 2020/12/04 03:46:41 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putcha(int number, char temparr[], int i)
{
	while (number > 0)
	{
		temparr[i] = number % 10 + 48;
		number = number / 10;
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		write(1, temparr + i, 1);
		i--;
	}
}

void	ft_putnbr(int nb)
{
	int		i;
	char	arr[10];

	i = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (nb < 0)
	{
		nb = nb * -1;
		write(1, "-", 1);
	}
	putcha(nb, arr, i);
	return ;
}
