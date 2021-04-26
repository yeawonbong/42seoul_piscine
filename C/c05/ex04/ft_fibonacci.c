/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 16:00:09 by ybong             #+#    #+#             */
/*   Updated: 2020/12/09 16:00:11 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	fibo(int index, int a, int b)
{
	if (index == 1)
		return (b);
	return (fibo(index - 1, b, a + b));
}

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	return (fibo(index, 0, 1));
}
