/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimdoyle <aimdoyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 18:39:31 by aimdoyle          #+#    #+#             */
/*   Updated: 2026/02/03 19:12:13 by aimdoyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 32 || str[i] > 126))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
// #include <stdio.h>

// int main(void)
// {
//    char str[] = "abc";
//    char str2[] = "ABC";
//    char str3[] = "123";
//    char str4[] = "\a";
//    printf("%d\n", ft_str_is_printable(str));
//    printf("%d\n", ft_str_is_printable(str2));
//    printf("%d\n", ft_str_is_printable(str3));
//    printf("%d\n", ft_str_is_printable(str4));
//    return(0); 
// }