/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlen_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaddrul <hbaddrul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 17:13:14 by hbaddrul          #+#    #+#             */
/*   Updated: 2021/08/01 21:48:00 by hbaddrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int	ft_numlen(int n, int base, bool abs)
{
	int	count;

	count = 0;
	if (n == 0 || (n < 0 && !abs))
		++count;
	while (n && ++count)
		n /= base;
	return (count);
}
