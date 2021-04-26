/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 06:12:43 by ybong             #+#    #+#             */
/*   Updated: 2020/12/09 19:50:09 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	argc = argc - 1;
	while (*argv[argc])
		write(1, argv[argc]++, 1);
	write(1, "\n", 1);
	return (0);
}
