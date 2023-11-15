/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:35:22 by ilbendib          #+#    #+#             */
/*   Updated: 2023/11/15 16:22:36 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdlib.h>
#include <stdarg.h>

int     ft_putchar(char c);
void    ft_putnbr_unsigned(int nb);
void    ft_putstr(char *str);
void    ft_putnbr(int nb);



#endif
