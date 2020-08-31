/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmyesha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 13:44:38 by dmyesha           #+#    #+#             */
/*   Updated: 2020/08/31 17:32:29 by burswyck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BSQ.h"

int		main(int argc, char **argv)
{
	int i;
	int fd;
	char a[1];

	i = 0;
	fd = open(argv[1], O_RDONLY);
   	while (read(fd, a, 1))
		if (*a != '\n')
		{
			i++;
			write(1, a, 1 );
		}
		else
			break;
	if (i == 4)
		write(1, "OK", 2);
	i = 1;
	if (argc > 1)
	{
		while(i < argc)
		{
		//	if (ft_check_map(argv[i]))
			//	ft_init_map(argv[i]);
			i++;
		}
	}
	else
		return (0);
}
