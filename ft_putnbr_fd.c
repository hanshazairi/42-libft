/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaddrul <hbaddrul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 00:57:40 by hbaddrul          #+#    #+#             */
/*   Updated: 2021/07/26 01:06:07 by hbaddrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar_fd(char c, int fd);

void	ft_putnbr_fd(int n, int fd)
{
	int		sign;
	char	c;

	sign = 1;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		sign = -1;
	}
	if (n / 10)
		ft_putnbr_fd(n / 10 * sign, fd);
	c = '0' + n % 10 * sign;
	ft_putchar_fd(c, fd);
}
