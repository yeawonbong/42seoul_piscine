/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 18:47:06 by ybong             #+#    #+#             */
/*   Updated: 2020/11/22 18:47:08 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	print1(int row)
{
	int i;

	ft_putchar('A');
	i = row - 2;
	while (i > 0)
	{
		ft_putchar('B');
		i--;
	}
	if (row > 1)
	{
		ft_putchar('C');
	}
	ft_putchar('\n');
}

void	print2(int row)
{
	int i;

	ft_putchar('B');
	i = row - 2;
	while (i > 0)
	{
		ft_putchar(' ');
		i--;
	}
	if (row > 1)
	{
		ft_putchar('B');
	}
	ft_putchar('\n');
}

void	rush(int row, int col)
{
	int i;

	i = 0;
	if (row > 0 && col > 0)
	{
		while (i < col)
		{
			if (i == 0 || i == col - 1)
			{
				print1(row);
			}
			else
			{
				print2(row);
			}
			i++;
		}
	}
}
