/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 17:46:15 by ybong             #+#    #+#             */
/*   Updated: 2020/12/07 17:46:19 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		count_baselen(char *base)
{
	int	baselen;

	baselen = 0;
	while (base[baselen])
	{
		if (base[baselen] == '-' || base[baselen] == '+')
			return (0);
		baselen++;
	}
	return (baselen);
}

int		ft_same_char(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (base[i])
	{
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_writer(int nbr, char *base, int baselen)
{
	if (nbr > 0)
	{
		ft_writer(nbr / baselen, base, baselen);
		write(1, &base[nbr % baselen], 1);
	}
}

void	ft_minimum_write(int nbr, char *base, int baselen)
{
	if (nbr != 0)
	{
		ft_minimum_write(nbr / baselen, base, baselen);
		write(1, &base[nbr % baselen * -1], 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	baselen;

	if (nbr == 0)
		write(1, &base[0], 1);
	baselen = count_baselen(base);
	if (ft_same_char(base) == 0 || count_baselen(base) <= 1)
		return ;
	if (nbr == -2147483648)
	{
		write(1, "-", 1);
		ft_minimum_write(nbr, base, baselen);
		return ;
	}
	else if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	ft_writer(nbr, base, baselen);
}
