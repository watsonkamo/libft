/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eshintan <eshintan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 17:29:17 by eshintan          #+#    #+#             */
/*   Updated: 2024/01/20 23:48:09 by eshintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int i)
{
	return (32 <= i && i <= 126);
}

/*
int main (void)
{
    char i = 'A';

    if (ft_isprint(i))
    {
        printf("%dはprintableです\n", i);
    }
    else
    {
        printf("%dはprintableではありません\n", i);
    }
    return(0);
}*/