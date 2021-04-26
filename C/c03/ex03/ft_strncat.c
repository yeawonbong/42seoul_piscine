/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 21:41:23 by ybong             #+#    #+#             */
/*   Updated: 2020/12/03 21:41:26 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int i;

	i = 0;
	while (dest[i])
		i++;
	while (nb > 0 && *src)
	{
		dest[i] = *src;
		i++;
		src++;
		nb--;
	}
	dest[i] = '\0';
	return (dest);
}
