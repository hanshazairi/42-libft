/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaddrul <hbaddrul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 20:23:35 by hbaddrul          #+#    #+#             */
/*   Updated: 2021/05/07 13:58:53 by hbaddrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;
	char	*haystack_tmp;
	char	*needle_tmp;

	needle_len = ft_strlen(needle);
	if (!needle_len)
		return ((char *)haystack);
	if (!ft_strlen(haystack) || len < needle_len)
		return (0);
	len = len - needle_len + 1;
	while (len-- && *haystack)
	{
		haystack_tmp = (char *)haystack;
		needle_tmp = (char *)needle;
		while (*haystack_tmp == *needle_tmp && *needle_tmp)
		{
			++haystack_tmp;
			++needle_tmp;
		}
		if (*needle_tmp == 0)
			return ((char *)haystack);
		++haystack;
	}
	return (0);
}
