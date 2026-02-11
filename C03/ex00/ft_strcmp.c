/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimee <aimee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 23:21:07 by aimdoyle          #+#    #+#             */
/*   Updated: 2026/02/05 12:21:52 by aimee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strcmp(char *s1, char *s2)
{
    int i;

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
