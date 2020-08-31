

#include "BSQ.h"

char *ft_first_row(char *str)
{
int fd;
char *a;
char *temp_line;
int i;

fd = open(str, O_RDONLY);
   	while (read(fd, a, 1))
		if (*a != '\n')
		{
			i++;
		}
		else
		{
			temp_line = malloc(sizeof(*temp_line) * i);
			close(fd);
			fd = open(str, O_RDONLY);
			i = 0;
			while (read(fd, a, 1))
				if (*a != '\n')
				{
					temp_line[i] = a[0];
					i++;
				}
				else 
					break;
			break;	
		}
        return (temp_line);
    }
