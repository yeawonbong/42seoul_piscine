/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 01:36:11 by ybong             #+#    #+#             */
/*   Updated: 2020/12/01 01:37:23 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int temp;
	int count;
	int i;

	count = 1;
	i = 0;
	while (count <= size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - count];
		tab[size - count] = temp;
		count++;
		i++;
	}
}
