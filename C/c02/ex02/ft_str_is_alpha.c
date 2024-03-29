/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 23:39:21 by ybong             #+#    #+#             */
/*   Updated: 2020/12/01 23:39:59 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (!((65 <= str[0] && str[0] <= 90) ||\
			(97 <= str[0] && str[0] <= 122)))
			return (0);
		else
		{
			str++;
		}
	}
	return (1);
}
