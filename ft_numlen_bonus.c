/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlen_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaddrul <hbaddrul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 01:23:44 by hbaddrul          #+#    #+#             */
/*   Updated: 2021/08/01 01:24:08 by hbaddrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_numlen(unsigned long long n, int base)
{
	if (n / base == 0)
		return (1);
	return (1 + ft_numlen(n / base, base));
}