#include "libft.h"
#include <stdlib.h>
#include <string.h>

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
	
	printf("%zu", dest1);
}*/

//check ft_strlcat
/*int main()
{
	const char src[] = "123456789";

	char dest1[] = "124563";
	
	printf("%zu\n", ft_strlcat(dest1,src ,3));
}*/

//check strchr
/*int main()
{
	printf("%s\n", ft_strchr("abacate",'c'));

	printf("%s\n", strchr("abacate", 'c'));
}*/

//check strrchr
/*int main()
{
	printf("%s\n", ft_strrchr("abacacte",'c'));

	printf("%s\n", strrchr("abacacte", 'c'));
}*/

//check strncmp
/*int main()
{
	printf("%d\n", ft_strncmp("abacate", "abacate", 5));

	printf("%d\n", strncmp("abacate", "abacate", 5));
}*/

//check strnstr
/*int main()
{
	printf("%s\n", strnstr("hello World!", "World",5));
	printf("%s\n", ft_strnstr("hello World!", "World",5));
}*/

//check ft_strdup
/*int main()
{
    char *str1 = "Hello, world!";
    char *str2 = strdup(str1);
    char *str3 = ft_strdup(str1);

    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    printf("str3: %s\n", str3);

    if (strcmp(str2, str3) == 0)
    {
        printf("The two strings are the same.\n");
    }
    else
    {
        printf("The two strings are different.\n");
    }

    free(str2);
    free(str3);

    return 0;
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

//check memchr
/*int main() {
    const char str[] = "ABCDEFG";
    const char *result;

    // Search for the character 'D' in the string
    result = ft_memchr(str, 'D', 3);

    if (result != NULL) {
        printf("Character 'D' found at position %ld\n", result - str + 1);
    } else {
        printf("Character 'D' not found\n");
    }

    return 0;
}*/

//chech memcmp
/*int main()
{
	printf("%d\n", ft_memcmp("abecate", "abacate",4));

	printf("%d\n", memcmp("abecate", "abacate",4));
}*/

//check  
/*int main()
{
	int *ft_array;
    int *libc_array;
    int i;

    ft_array = ft_calloc(10, sizeof(int));
    libc_array = calloc(10, sizeof(int));

    if (ft_array == NULL || libc_array == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (i = 0; i < 10; i++)
        ft_array[i] = i + 1;

    for (i = 0; i < 10; i++)
        libc_array[i] = i + 1;

    for (i = 0; i < 10; i++)
    {
        if (ft_array[i]!= libc_array[i])
        {
            printf("ft_calloc and calloc produced different results\n");
            return 1;
        }
		printf("ft_array[%d] = %d\n", i, ft_array[i]);//just to be visual
		printf("libc_array[%d] = %d\n", i, libc_array[i]);//just to be visual
    }

    free(ft_array);
    free(libc_array);
    return 0;
}*/

//check ft_atoi
/*int main()
{
	printf("-1234:%d\n", atoi(" -1234"));

	printf("-1234:%d\n", ft_atoi(" -1234"));
}*/

//check toupper/lower
/*int main()
{
	printf("ABC :%c%c%c\n", ft_toupper('a'), ft_toupper('b'), ft_toupper('c'));

	printf("abc :%c%c%c\n", ft_tolower('A'), ft_tolower('B'), ft_tolower('C'));
}*/

