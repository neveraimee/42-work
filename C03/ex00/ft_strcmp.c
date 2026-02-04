/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimdoyle <aimdoyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 23:21:07 by aimdoyle          #+#    #+#             */
/*   Updated: 2026/02/03 15:50:24 by aimdoyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while(s1[i] != '\0' && s2[i] != '\0')
    {
        if(s1[i] != s2[i])
        {
            return (s1[i] - s2[i]);
		}
        i++;
    }
    return(s1[i] - s2[i]);
}
// #include <stdio.h> 
// int main(void)
// {
// 	char x[] = "123";
// 	char y[] = "123";
// 	char z[] = "124";
// 	printf("%d\n", ft_strcmp(x, y));
// 	printf("%d\n", ft_strcmp(x, z));
//     printf("%d\n", ft_strcmp(z, x));
// }