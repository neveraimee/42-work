/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimdoyle <aimdoyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 22:11:58 by aimdoyle          #+#    #+#             */
/*   Updated: 2026/02/02 19:17:00 by aimdoyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			if (!(str[i] >= 'A' && str[i] <= 'Z'))
				return (0);
		}
		i++;
	}
	return (1);
}
// #include <stdio.h>

// int main(void)
// {
//     int z = ft_str_is_alpha("");
//     int y = ft_str_is_alpha("afyr");
//     printf("%d\n", z);
//     printf("%d\n", y);
// }