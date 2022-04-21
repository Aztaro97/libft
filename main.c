#include "libft.h"

int	main(void)
{
	const char	*str1;
	const char	*str2;
	const char	*resul;

	str1 = "hell";
	str2 = "word";
	resul = ft_strnstr(str1, str2, 4);
	printf("%s The valu is \n", resul);
	return (0);
}
