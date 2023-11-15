/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:48:19 by ilbendib          #+#    #+#             */
/*   Updated: 2023/11/15 13:48:22 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putnbr_unsigned(int nb)
{
    if (nb > '9')
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    else if (nb >= '0' && nb <= '9')
        ft_putchar(nb + 48);
}