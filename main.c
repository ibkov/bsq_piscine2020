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
	char **mass_one_map;
	char *temp_file;
	int j = 0;
	int count_lines = 0;
	char *map;
	

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
	while (mass_maps[0][k] != '\0')
	{
		if (mass_maps[0][k] ==  '\n')
			count_lines++;
		k++;
	}
	mass_one_map = malloc(sizeof(*mass_one_map) * count_lines);
	k = 0;
	int v = 0;
	count_lines = 0;
	while (mass_maps[0][k] != '\0')
	{
		count_lines++;
		if (mass_maps[0][k] ==  '\n')
		{
			i = 0;
			map = malloc(sizeof(*map) * count_lines);
			k -= count_lines;
			count_lines = 0;
			while(mass_maps[0][k] !=  '\n')
			{
				map[i] = mass_maps[0][k];
				k++;
				i++;
			}
			v++;
			
		}
		else
			continue;
		mass_one_map[v] = map;
		count_lines = 0;
		k++;
	}

	printf("%s", mass_one_map[0]);

	

	

	printf("%s", mass_maps[0]);
	return (0);
}
