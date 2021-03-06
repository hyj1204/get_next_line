/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   words_count.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yijhuang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/27 12:10:06 by yijhuang          #+#    #+#             */
/*   Updated: 2018/12/30 02:31:06 by yijhuang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_words_count(char const *s, char c)
{
	int i;
	int num;

	i = 0;
	num = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
		{
			num++;
		}
		i++;
	}
	return (num);
}
