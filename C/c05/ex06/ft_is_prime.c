/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 18:20:51 by ybong             #+#    #+#             */
/*   Updated: 2020/12/09 19:05:32 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	unsigned int sqrt;
	unsigned int num;

	sqrt = 1;
	num = nb;
	while (sqrt * sqrt < num)
		sqrt++;
	if (sqrt * sqrt == num)
		return ((int)sqrt);
	return ((int)sqrt);
}

int	ft_is_prime(int nb)
{
	unsigned int i;
	unsigned int num;

	i = 2;
	num = nb;
	if (num == 2)
		return (1);
	if (num < 2)
		return (0);
	while (i <= (unsigned int)ft_sqrt(num))
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (1);
}
