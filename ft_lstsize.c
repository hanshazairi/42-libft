/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaddrul <hbaddrul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 01:20:53 by hbaddrul          #+#    #+#             */
/*   Updated: 2021/07/26 01:25:23 by hbaddrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

int	ft_lstsize(t_list *lst)
{
	int	ret;

	ret = 0;
	while (lst && ++ret)
		lst = lst->next;
	return (ret);
}
