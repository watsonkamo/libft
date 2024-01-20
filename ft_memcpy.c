/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eshintan <eshintan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 02:28:04 by eshintan          #+#    #+#             */
/*   Updated: 2024/01/20 23:48:47 by eshintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dest, const void *src, size_t n)
{
	size_t	i;
	char	*dest_ptr;
	char	*src_ptr;	

	if (!dest)
		return (NULL);
	i = 0;
	while (i < n)
	{
		dest_ptr = (char *)dest;
		src_ptr = (char *)src;
		dest_ptr[i] = src_ptr[i];
		i++;
	}
	return (dest);
}

/*
int main() 
{
    int src[] = {1, 2, 3, 4, 5};
    int dest[5];

    size_t size = sizeof(src);

    my_memcpy(dest, src, size);

    for (int i = 0; i < 5; ++i) {
        printf("%d ", dest[i]);
    }
    printf("\n");

    return 0;
}*/
