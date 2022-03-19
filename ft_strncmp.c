#include "./libft.h"
#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, t_size_t n)
{
  t_size_t i = 0;
  while (i < n)
  {
    if (s1[i] != s2[i]){
      return ((unsigned char)s1[i] - (unsigned char)s2[i]);
    }
    i++;
  }
  return (0);
}
