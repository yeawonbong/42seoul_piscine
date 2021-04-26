/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 04:42:12 by ybong             #+#    #+#             */
/*   Updated: 2020/12/02 04:42:15 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (('A' <= str[i] && str[i] <= 'Z') ||\
			('a' <= str[i] && str[i] <= 'z'))
		{
			if ('a' <= str[i] && str[i] <= 'z')
				i++;
			else
			{
				str[i] += 32;
				i++;
			}
		}
		else
			i++;
	}
	return (str);
}