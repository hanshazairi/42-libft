/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unumlen_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaddrul <hbaddrul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 01:23:44 by hbaddrul          #+#    #+#             */
/*   Updated: 2021/08/01 17:24:53 by hbaddrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_unumlen(unsigned long long n, int base)
{
	if (n / base == 0)
		return (1);
	return (1 + ft_unumlen(n / base, base));
}
