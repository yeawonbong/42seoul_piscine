/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 17:27:28 by ybong             #+#    #+#             */
/*   Updated: 2020/12/10 17:27:31 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	**ft_swap(int argc, char *argv[], int i, int j)
{
	char	*temp;

	while (1 < argc--)
	{
		i = 1;
		while (i < argc)
		{
			j = 0;
			while (argv[i][j])
			{
				if (argv[i][j] > argv[i + 1][j])
				{
					temp = argv[i];
					argv[i] = argv[i + 1];
					argv[i + 1] = temp;
					break ;
				}
				else if (argv[i][j] < argv[i + 1][j])
					break ;
				j++;
			}
			i++;
		}
	}
	return (argv);
}

int		main(int argc, char *argv[])
{
	int		i;
	int		j;

	i = 1;
	j = 0;
	argv = ft_swap(argc, argv, i, j);
	while (i < argc)
	{
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
		j = 0;
	}
	return (0);
}
