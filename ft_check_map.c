/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmyesha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 14:10:13 by dmyesha           #+#    #+#             */
/*   Updated: 2020/08/31 14:23:58 by dmyesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BSQ.h"

int     ft_check_char_lines(char *argv)
{
    char empty;
    char obstacle;
    char num;
    int fd;
    char buf[1];
    char *dest;

    dest = malloc(sizeof(char) * 4);
    dest = ft_get_info(argv, dest);
    num = dest[0];
    empty = dest[1];
    obstacle = dest[2];
    fd = open(argv, O_RDONLY);

    while(read(fd, buf, 1))
    {   

        if (buf[0] != dest[1] || buf[0] != dest[2] || buf[0] != '\n' 
        || buf[0] != '\r' || buf[0] != dest[0])
        {   
            ft_putstr("Error in == ");
            ft_putchar(buf[0]);
            ft_putchar('\n');
            free(dest);
            close(fd);
            return (0);
        }
    }
    free(dest);
    close (fd);
    return (1);
}

int     ft_check_lines(char *argv)
{
    int lines;
    int currentline;
    int fd;
    char buf[1];
    char *dest;

    dest = malloc(sizeof(char) * 4);
    currentline = 0;
    dest = ft_get_info(argv, dest);
    lines = dest[0] - 48;
    free(dest);
    fd = open(argv, O_RDONLY);
    while(read(fd, buf, 1))
    {
        if (buf[0] == '\n')
            currentline++;
    }
    close(fd);
    if (lines != currentline - 1)
        return(0);
    return(1);
}

char    *ft_get_info(char *argv, char *dest)
{
    int fd;
    char buf[1];
    int i;

    i = 0;
    if((fd = open(argv, O_RDONLY)))
    {
        while (read(fd, buf, 1))
        {
            if (buf[0] != '\n')
                dest[i] = buf[0];
            else
                break;
            i++;
        }
    }
    close(fd);
    return (dest);
}

int ft_check_info(char *str)
{
    int flag;
    int i;

    flag = 0;
    i = 0;
    while(str[i])
    {
        flag++;
        i++;
    }
    if (flag != 4 || str[0] < '0' || str[0] > '9'
        || str[1] < 20 || str[1] > 126 || str[2] < 20 || str[2] > 126 
        || str[2] < 20 || str[2] > 126)
        return (0);
    else
        return (1);
}

int     ft_check_map(char *argv)
{
    char *dest;

    dest = malloc(sizeof(char) * 4);
    dest = ft_get_info(argv, dest);
 
    if (!ft_check_info(dest))
    {
        ft_putstr("map errorINFO\n");
        free(dest);
        return (0);
    }
    if (ft_check_lines(argv) != 1)
    {
        ft_putstr("map errorLINES\n");
        return (0);
    }
   if(ft_check_char_lines(argv))
        ft_putstr("Succes in CHECK\n");
    else
    {
        ft_putstr("Error in FT_CHECK_LINES\n");
        return (0);
    }
    return (1);
}
//     if(ft_check_char_lines(argv))
//             flag = 1;
//     else
//     {
//         return 0;
//         ft_putstr("Error in FT_CHECK_LINES");
//     }
//     return (flag);
// }

