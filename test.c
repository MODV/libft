#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int     main()
{
    char    v = '1';
    char    b = ' ';
    printf("%i || ft_%i\n", isdigit(v), ft_isdigit(v));
    if (isalpha(v) == ft_isalpha(v))
        printf("Correct\n");
    else
        printf("End\n");
}