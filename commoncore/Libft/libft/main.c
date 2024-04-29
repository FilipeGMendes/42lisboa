#include "libft.h"
#include <stdlib.h>
#include <string.h>

/*         ft_is...        */
/*int main()
{
	printf("alpha:%d\n", ft_isalpha('a'));
	printf("digit:%d\n", ft_isalpha('3'));
	printf("special char:%d\n", ft_isalpha('#'));
	printf("spaces:%d\n", ft_isalpha('\n'));

	return 0;
}*/

/*         ft_strlen        */     
/*int main()
{
	printf("len 1: %d\n",ft_strlen("a"));
	printf("len 2: %d\n",ft_strlen("a "));
	printf("len 11: %d\n",ft_strlen("a # asv123\n"));
}*/

/*         ft_strlcpy        */
/*int main()
{
	const char src[20] = "Hello";

	char dest1[20] = "World";

	ft_strlcpy(dest1,src ,5);
	
	printf("%zu", dest1);
}*/

/*         ft_strlcat        */
/*int main()
{
	char dest[11] = 'a';
	
	printf("%zu\n", ft_strlcat(dest, "lorem", 15));
}*/

/*         strchr        */
/*int main()
{
	printf("%s\n", ft_strchr("abacate",'c'));

	printf("%s\n", strchr("abacate", 'c'));
}*/

/*         strrchr        */
/*int main()
{
	printf("%s\n", ft_strrchr("abacacte",'c'));

	printf("%s\n", strrchr("abacacte", 'c'));
}*/

/*         strncmp        */
/*int main()
{
	printf("%d\n", ft_strncmp("test\200", "test\0", 6));

	printf("%d\n", strncmp("test\200", "test\0", 6));
}*/

/*         strnstr        */
/*int main()
{
	printf("%s\n", ft_strnstr("w o r l d", "World",9));
}*/

/*         ft_strdup        */
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

/*         ft_substr        */
/*int main()
{
    char *str1 = "Hello, world!";
    char *subs1 = ft_substr(str1, 7, 5);

    printf("orignal :%s", str1);
    printf("substring :%s", subs1);
}*/

/*         ft_strjoin        */
/*int main()
{
    char *s1 = "Hello ";
    char *s2 = "world!";

    printf("%s",ft_strjoin(s1, s2));
}*/

/*         ft_strtrim        */
/*void	ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

int		main(int argc, const char *argv[])
{
	char	*strtrim;
	int		arg;

	alarm(5);
	if (argc == 1)
		return (0);
	else if ((arg = atoi(argv[1])) == 1)
	{
		char s1[] = "lorem \n ipsum \t dolor \n sit \t amet";
		if (!(strtrim = ft_strtrim(s1, " ")))
			ft_print_result("NULL");
		else
			ft_print_result(strtrim);
		if (strtrim == s1)
			ft_print_result("\nA new string was not returned");
	}
	else if (arg == 2)
	{
		char s1[] = "lorem ipsum dolor sit amet";
		if (!(strtrim = ft_strtrim(s1, "te")))
			ft_print_result("NULL");
		else
			ft_print_result(strtrim);
		if (strtrim == s1)
			ft_print_result("\nA new string was not returned");
	}
	else if (arg == 3)
	{
		char s1[] = " lorem ipsum dolor sit amet";
		if (!(strtrim = ft_strtrim(s1, "l ")))
			ft_print_result("NULL");
		else
			ft_print_result(strtrim);
		if (strtrim == s1)
			ft_print_result("\nA new string was not returned");
	}
	else if (arg == 4)
	{
		char s1[] = "lorem ipsum dolor sit amet";
		if (!(strtrim = ft_strtrim(s1, "tel")))
			ft_print_result("NULL");
		else
			ft_print_result(strtrim);
		if (strtrim == s1)
			ft_print_result("\nA new string was not returned");
	}
	else if (arg == 5)
	{
		char s1[] = "          ";
		if (!(strtrim = ft_strtrim(s1, " ")))
			ft_print_result("NULL");
		else
			ft_print_result(strtrim);
		if (strtrim == s1)
			ft_print_result("\nA new string was not returned");
	}
	return (0);
}*/

/*        check ft_split        */
/*int main(void)
{
	char *str = "Hello I am here";
	char **split = ft_split(str, ' ');
	if (split)
	{
		for (int i = 0; split[i]; i++)
			printf("%s\n", split[i]);
	}
	else
	{
		printf("Split failed\n");
	}
	return 0;
}*/

/*          ft_memset        */
/*int main()
{
	char str1[16] = "after is 4dots !";
	
	ft_memset(str1 + 10, '.', 4*sizeof(char));
	printf("memset: %s\n", str1);

}*/

/*         ft_bzero        */
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

/*         ft_memcpy        */
/*int main(void)
{
    char src[50] = "Hello, World!";
    char dst[50];
    char dst2[50];
    size_t n = 10;
    // Test with overlapping memory regions
    memcpy(dst, src, n);
    ft_memcpy(dst2, src, n);
    printf("Original string: %s\n", src);
    printf("memcpy result: %s\n", dst);
    printf("ft_memcpy result: %s\n", dst2);
    // Test with non-overlapping memory regions
    memcpy(dst, src + n, n);
    ft_memcpy(dst2, src + n, n);
    printf("Original string: %s\n", src);
    printf("memcpy result: %s\n", dst);
    printf("ft_memcpy result: %s\n", dst2);
    return (0);
}*/

/*         ft_memmove        */
/*int	main(void)
{
	char    src[] = "12345";
    char    dest[50] = "12345";
    
    memmove(dest + 5, src + 3, 11);
	printf("memmove result: %s\n", dest);

	ft_memmove(dest + 5, src + 3, 11);
	printf("ft_memmove result: %s\n", dest);
	return (0);
}*/

/*         memchr        */
/*int main() {
    const char str[] = "ABCDEFG";
    const char *result;

    // Search for the character 'D' in the string
    result = ft_memchr(str, 'D', 5);

    printf("%s\n", result);

    if (result != NULL) {
        printf("Character 'D' found at position %ld\n", result - str + 1);
    } else {
        printf("Character 'D' not found\n");
    }

    return 0;
}*/

/*         memcmp        */
/*int main()
{
	printf("%d\n", ft_memcmp("t\200", "t\0",2));

	printf("%d\n", memcmp("t\200", "t\0",2));
}*/

/*         ft_calloc        */
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

/*         ft_atoi        */
/*int main()
{
	printf("-1234:%d\n", atoi("\n\n\n  -46\b9 \n5d6"));

	printf("-1234:%d\n", ft_atoi("\n\n\n  -46\b9 \n5d6"));
}*/

/*        ft_itoa        */
int main()
{
    char *str = ft_itoa(-2147483648LL);
    printf("%s\n", str);
    free(str);
    return 0;
}

/*         toupper/lower        */
/*int main()
{
	printf("ABC :%c%c%c\n", ft_toupper('a'), ft_toupper('b'), ft_toupper('c'));

	printf("abc :%c%c%c\n", ft_tolower('A'), ft_tolower('B'), ft_tolower('C'));
}*/