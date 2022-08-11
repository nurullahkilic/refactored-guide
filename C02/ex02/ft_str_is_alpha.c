/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nukilic <nukilic@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 11:42:17 by nukilic           #+#    #+#             */
/*   Updated: 2022/07/29 11:42:21 by nukilic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) < 65)
		{
			return (0);
		}
		if (*(str + i) > 90 && *(str + i) < 97)
		{
			return (0);
		}
		if (*(str + i) > 122)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
