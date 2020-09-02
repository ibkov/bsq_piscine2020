/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BSQ.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmyesha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 13:44:09 by dmyesha           #+#    #+#             */
/*   Updated: 2020/08/31 17:19:34 by burswyck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

void    ft_init_map(char *argv);
int     ft_check_info(char *argv);
int     ft_check_lines(char *argv);
int     ft_strlen(char *str);
char *ft_first_row(char *str);
int		ft_atoi(char *str);
void    ft_putchar(char c);
void    ft_putstr(char *str);
int     ft_check_char_lines(char *argv);
char    *ft_get_info(char *argv, char *dest);
int     ft_check_map(char *argv);


#endif
