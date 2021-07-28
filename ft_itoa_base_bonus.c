/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaddrul <hbaddrul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 00:55:35 by hbaddrul          #+#    #+#             */
/*   Updated: 2021/07/28 20:53:58 by hbaddrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_numlen(long long n, int base)
{
	if (n / base == 0)
		return (1);
	return (1 + ft_numlen(n / base, base));
}

char	*ft_itoa_base(long long n, int base)
{
	int		len;
	char	*digits;
	char	*ret;

	digits = "0123456789abcdef";
	len = ft_numlen(n, base);
	if (n < 0)
		++len;
	ret = malloc(len + 1);
	if (!ret)
		return (0);
	ret[len] = 0;
	if (n == 0)
		ret[0] = '0';
	if (n < 0)
		ret[0] = '-';
	while (n)
	{
		if (n > 0)
			ret[--len] = digits[n % base];
		else
			ret[--len] = digits[-n % base];
		n /= base;
	}
	return (ret);
}
