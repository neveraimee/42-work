/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimee <aimee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 23:21:07 by aimdoyle          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2026/02/05 12:21:52 by aimee            ###   ########.fr       */
=======
/*   Updated: 2026/02/08 19:54:56 by aimdoyle         ###   ########.fr       */
>>>>>>> refs/remotes/origin/main
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

<<<<<<< HEAD
    i = 0;
    while(s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
    {
        i++;
    }
    return (s1[i] - s2[i]);
}
#include <stdio.h>  //library for printf
int main(void) //main function
{
    char *a = "abc"; //char varible for s1
    char *b = "abd"; //char varible for s2

    int result = ft_strcmp(a, b); //int type result for ASCII comparison!

    printf("%d\n", result); //print number, result
    return (0);
}
=======
	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
/*#include <stdio.h> 
int main(void)
{
	char x[] = "123";
	char y[] = "123";
	char z[] = "124";
	printf("%d\n", ft_strcmp(x, y));
	printf("%d\n", ft_strcmp(x, z));
    printf("%d\n", ft_strcmp(z, x));
}*/
>>>>>>> refs/remotes/origin/main
