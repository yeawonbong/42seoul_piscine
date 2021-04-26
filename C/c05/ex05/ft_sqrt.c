/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 16:34:59 by ybong             #+#    #+#             */
/*   Updated: 2020/12/09 18:49:16 by ybong            ###   ########.fr       */
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
	return (0);
}
