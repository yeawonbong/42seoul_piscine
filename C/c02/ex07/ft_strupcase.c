/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 03:47:14 by ybong             #+#    #+#             */
/*   Updated: 2020/12/02 03:47:52 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (('A' <= str[i] && str[i] <= 'Z') ||\
			('a' <= str[i] && str[i] <= 'z'))
		{
			if ('A' <= str[i] && str[i] <= 'Z')
				i++;
			else
			{
				str[i] -= 32;
				i++;
			}
		}
		else
			i++;
	}
	return (str);
}
