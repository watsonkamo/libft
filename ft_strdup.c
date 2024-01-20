/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eshintan <eshintan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 14:53:46 by eshintan          #+#    #+#             */
/*   Updated: 2024/01/19 03:48:29 by eshintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*p;
	size_t	i;

	i = ft_strlen(src) + 1;
	p = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (p == 0)
	{
		return (NULL);
	}
	ft_strlcpy(p, src, i);
	return (p);
}
/*
int main(void)
{
    char *s = "Hello, world!";
    char *s_dup = ft_strdup(s);
    if (s_dup != '\0')
    {
        printf("Original: %s\n", s);
        printf("Duplicate: %s\n", s_dup);
        free(s_dup);
    }
    return (0);
}*/