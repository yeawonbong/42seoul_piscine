/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base_process.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 16:31:09 by ybong             #+#    #+#             */
/*   Updated: 2020/12/08 16:31:14 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		count_len(char *base)
{
	int		len;

	len = 0;
	while (base[len])
	{
		if (base[len] == '-' || base[len] == '+')
			return (0);
		len++;
	}
	return (len);
}

int		ft_same_char(char *base, int i, int j)
{
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

char	ft_putchar_process(char *str, char *base, int base_len, int i)
{
	int		j;
	int		num;
	int		flag;

	j = 0;
	num = 0;
	flag = 0;
	while (str[i])
	{
		while (base[j])
		{
			if (str[i] == base[j])
			{
				flag = 1;
			}
			j++;
			num = (num * base_len) + j;
		}
		if (flag == 0)
			break ;
		i++;
		j = 0;
	}
	return (num);
}

int		ft_atoi_base(char *str, char *base)
{
	int		i;
	int		j;
	int		base_len;
	int		minus;
	int		num;

	i = 0;
	j = 0;
	base_len = count_len(base);
	while ((9 <= str[i] && str[i] <= 13) || str[i] == 32)
		i++;
	minus = 1;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus *= -1;
		i++;
	}
	if (ft_same_char(base, i, j) == 0 || count_len(base) <= 1)
		return (0);
	num = ft_putchar_process(str, base, base_len, i);
	return ((int)(num * minus));
}
