/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 19:00:49 by ybong             #+#    #+#             */
/*   Updated: 2020/12/09 19:00:51 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	unsigned long long i;
	unsigned long long num;

	i = 2;
	num = nb;
	while (i * i <= num)
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	unsigned int num;

	num = (unsigned int)nb;
	if (nb <= 2)
		return (2);
	if (ft_is_prime(num) == 1)
		return ((int)num);
	else
		while (ft_is_prime(num) == 0)
			num++;
	return ((int)num);
}
