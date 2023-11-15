/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:23:10 by ilbendib          #+#    #+#             */
/*   Updated: 2023/11/15 16:28:10 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void *ft_print(const char *str, int count)
{
    int letter;

    letter = 0;
    while (letter)
    {
        if (letter == 'c')
            ft_putchar(letter);
        else if (letter == 's')
            ft_putstr(&str);
        else if (letter == 'd')
            ft_putnbr(letter);
        else if (letter = 'u')
            ft_putnbr_unsigned(letter);
        else if (letter == 'i')
            ft_putnbr(letter);
        count++;
    }
    return (count);
}
int ft_printf(const char *str, ...)
{
    int count;
    int i;
    va_list 
    
    i = 0;
    count = 0;
    while (str[i])
    {
        if (str[i] == '%')  
        {
            i++;
            ft_print(str, count);
        }
        count++;
    }
    return (count);
}