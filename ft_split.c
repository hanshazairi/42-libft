/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaddrul <hbaddrul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 17:02:38 by hbaddrul          #+#    #+#             */
/*   Updated: 2021/05/09 04:24:29 by hbaddrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	scount(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			++count;
			while (*s && *s != c)
				++s;
		}
		else
			++s;
	}
	return (count);
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

char	**ft_split(const char *s, char c)
{
	char	**ret;
	size_t	i;
	size_t	len;

	i = 0;
	ret = malloc(sizeof(char *) * scount(s, c) + 1);
	if (!ret)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
				++s;
			ret[i++] = ft_strndup(s - len, len);
		}
		else
			++s;
	}
	ret[i] = 0;
	return (ret);
}
