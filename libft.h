#ifndef	HEADERFILE_H
#define HEADERFILE_H

# include <stdio.h>
# include <string.h>
# include <unistd.h>

int		ft_isalpha(int c);
int		ft_isalnum(int c);
int		ft_isdigit(int c);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void    ft_bzero(void *s, size_t n);
void	*ft_memset(void *s, int c, size_t len);
void	*ft_memmove(void *dst, const void *src, size_t len);

#endif