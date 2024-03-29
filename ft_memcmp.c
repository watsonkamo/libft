/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eshintan <eshintan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 02:24:33 by eshintan          #+#    #+#             */
/*   Updated: 2024/01/20 23:48:41 by eshintan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1 = s1;
	const unsigned char	*p2 = s2;

	while (n > 0)
	{
		if (*p1 != *p2)
		{
			return (*p1 - *p2);
		}
		n--;
		p1++;
		p2++;
	}
	return (0);
}

/*
int main() {
  char str1[] = "This is a test string";
  char str2[] = "This is a test string";
  int result = memcmp(str1, str2, sizeof(str1));
  if (result == 0) {
    printf("The two strings are equal.\n");
  } else {
    printf("The two strings are not equal.\n");
  }
  return 0;
}*/