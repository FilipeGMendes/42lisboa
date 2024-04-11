#include "libft.h"
#include <stdlib.h>

//check ft_is...
/*int main()
{
	printf("alpha:%d\n", ft_isalpha('a'));
	printf("digit:%d\n", ft_isalpha('3'));
	printf("special char:%d\n", ft_isalpha('#'));
	printf("spaces:%d\n", ft_isalpha('\n'));

	return 0;
}*/

// check ft_strlen
/*int main()
{
	printf("len 1: %d\n",ft_strlen("a"));
	printf("len 2: %d\n",ft_strlen("a "));
	printf("len 11: %d\n",ft_strlen("a # asv123\n"));
}*/

//check ft_strlcpy
/*int main()
{
	const char src[20] = "Hello";

	char dest1[20] = "World";

	ft_strlcpy(dest1,src ,5);
	
	printf("%s", dest1);
}*/

// check ft_memset
/*int main()
{
	char str1[16] = "after is 4dots !";
	
	ft_memset(str1 + 10, '.', 4*sizeof(char));
	printf("memset: %s\n", str1);

}*/

//check ft_bzero
/*int main()
{
    char str1[20] = "Hello, World!";
    char str2[20] = "Hello, World!";

    // Using ft_bzero
    ft_bzero(str1 + 7, 5); // Zero out 5 characters starting from index 7
    printf("ft_bzero result: %s\n", str1);

    // Using memset for comparison
    memset(str2 + 7, '\0', 5); // Zero out 5 characters starting from index 7
    printf("memset result: %s\n", str2);

    // Check if results match
    if (strcmp(str1, str2) == 0)
        printf("Results match!\n");
    else
        printf("Results don't match!\n");

    return 0;
}*/

//check ft_memcpy
/*int main()
{
	char	str1[] = "por tapar";
	char	str2[] = "tapado";

	printf("por tapar:%s\n",str1);
	
	ft_memcpy(str1, str2, sizeof(str2));
	printf("tapado:%s\n",str1);
}*/

//check ft_memmove
/*int main()
{
	char src[20] = "e do src";
	char dest[20];

	printf("before ft_memmove\nsrc:%s\ndest:%s\n", src, dest);

	ft_memmove(dest, src,8);
	printf("after ft_memmove\nsrc:%s\ndest:%s\n", src, dest);
	
	return 0;
}*/

//check ft_atoi
int main()
{
	printf("-1234:%d", atoi(" -1234"));

	printf("-1234:%d", ft_atoi(" -1234"));
}
