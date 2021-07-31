/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd_bonus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaddrul <hbaddrul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 21:21:18 by hbaddrul          #+#    #+#             */
/*   Updated: 2021/08/01 01:19:10 by hbaddrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_base_fd(unsigned long long n, int base, int fd)
{
	const char	*digits = "0123456789abcdef";

	if (n / base)
		ft_putnbr_base_fd(n / base, base, fd);
	ft_putchar_fd(digits[n % base], fd);
}
