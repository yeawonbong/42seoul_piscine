/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 01:33:51 by ybong             #+#    #+#             */
/*   Updated: 2020/12/02 01:33:54 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (!(48 <= str[0] && str[0] <= 57))
			return (0);
		else
		{
			str++;
		}
	}
	return (1);
}

#include <stdio.h>
int main(void)
{
	char arr[] = "35454543";
	char *str;
	str = arr;
	int result = ft_str_is_numeric(str);
	printf("%d", result);
}