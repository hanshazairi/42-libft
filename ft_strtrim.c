/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaddrul <hbaddrul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 15:58:24 by hbaddrul          #+#    #+#             */
/*   Updated: 2021/05/09 05:33:49 by hbaddrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isset(char c, const char *set)
{
	while (*set)
		if (c == *set++)
			return (1);
	return (0);
}

static char	*ft_strndup(const char *s1, size_t n)
{
	char	*ret;
	size_t	len;

	if (n < ft_strlen(s1))
		len = n;
	else
		len = ft_strlen(s1);
	ret = malloc(len + 1);
	if (!ret)
		return (0);
	ft_strlcpy(ret, s1, len + 1);
	return (ret);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*ret;
	char	*start;
	char	*end;

	start = (char *)s1;
	end = start + ft_strlen(s1);
	while (*start && isset(*start, set))
		++start;
	while (start < end && isset(*(end - 1), set))
		--end;
	ret = ft_strndup(start, end - start);
	return (ret);
}
