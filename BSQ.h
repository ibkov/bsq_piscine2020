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


#endif
