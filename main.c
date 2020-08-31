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
#include <stdio.h>

int		main(int argc, char **argv)
{
	int i;
	int fd;
	char a[1];
	int count_sym_file = 0;
	char **mass_maps;
	char *temp_file;
	int j = 0;
	

	i = 1;
	mass_maps = malloc(sizeof(*mass_maps) * (argc - 1));
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		while (read(fd, a, 1))
		{
			count_sym_file++;
		}
		temp_file = malloc(sizeof(*temp_file) * count_sym_file);
		close(fd);
		fd = open(argv[i], O_RDONLY);
		while (read(fd, a, 1))
		{
			temp_file[j] = *a;
			j++;
		}
		mass_maps[i - 1] = temp_file;
		j = 0;
		count_sym_file = 0;
		i++;
	}
	int k = 0;
	while(mass_maps[0][k] != '\0')
	{
		if (mass_maps[0][k] == '\n')
		{
			mass_maps[0][k] = '0';
		}
		k++;	
	}
	

	printf("%s", mass_maps[0]);
	return (0);
}
