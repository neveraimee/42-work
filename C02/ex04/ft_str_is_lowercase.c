/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimdoyle <aimdoyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 17:51:28 by aimdoyle          #+#    #+#             */
/*   Updated: 2026/02/02 20:31:32 by aimdoyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int main(void)
// {
//    char str[] = "abc";
//    char str2[] = "ABC";
//    char str3[] = "123";
//    char str4[] = "";
//    printf("%d\n", ft_str_is_lowercase(str));
//    printf("%d\n", ft_str_is_lowercase(str2));
//    printf("%d\n", ft_str_is_lowercase(str3));
//    printf("%d\n", ft_str_is_lowercase(str4));
//    return(0); 
// }