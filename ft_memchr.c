/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eshintan <eshintan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 02:24:19 by eshintan          #+#    #+#             */
/*   Updated: 2024/01/21 00:05:44 by eshintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;

	p = s;
	if (s == NULL)
		return (NULL);
	while (n > 0)
	{
		if (*p == (unsigned char)c)
			return ((void *)p);
		p++;
		n--;
	}
	return (NULL);
}

/*
int main() {
  char str[] = "test str";
  char c = 't';
  void *p = memchr(str, c, sizeof(str));
  if (p != NULL) {
    printf("character '%c' at position %ld\n", c);
  } else {
    printf("character '%c'not found\n", c);
  }
  return 0;
}*/