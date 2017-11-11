#include "libft.h"

int     ft_atoi(const char *str)
{
    int     i;
    int     n;
    char    neg;
    
    i = 0;
    while(ft_iswhitespace(str[i]))
        i++;
    neg = (str[i] == '-');
    if (str[i] == '-' || str[i] == '+')
        i++;
    n = 0;
    while (ft_isdigit(str[i]))
    {
        n = n * 10 + (str[i] - '0');
        i++;
    }
    return (neg ? -n : n);
}