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

int     ft_check_square(char *argv)
{
    int columns;
    int lines;
    int fd;
    
    if(fd = open(argv, O_RDONLY))
    {
        
    }
    else
        ft_putstr("Cannot open file in FT_CHECK_SQUARE");
        
    return (0);
}

int     ft_check_lines(char *argv)
{
    int fd;
    
    if(fd = open(argv, O_RDONLY))
    {
        
    }
    else
        ft_putstr("Cannot open file in FT_CHECK_LINES");
    return (0);
}

int		ft_check_info(char *argv)
{
    int fd;
    
    if(fd = open(argv, O_RDONLY))
    {
        
    }
    else
        ft_putstr("Cannot open file in FT_CHECK_INFO");
    return (0);
}

int     ft_check_map(char *argv)
{
    if (ft_check_info(argv) && ft_check_lines(argv) && )
}

