#include "libft.h"

int     count_digit(int n)
{
    int     len;
    
    len = (n == 0) ? 1 : 0;
    while (n != 0)
    {
        len++;
        n /= 10;
    }
    return (len);
}

char    *ft_itoa(int n)
{
    int     i;
    int     len;
    int     neg;
    char    *num;
    
    if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	neg = (n < 0 ? 1 : 0);
	len = count_digit(n);
	num = (char *)malloc(sizeof(*num) * (len + 1));
	if (num)
	{
	    n = (n < 0) ? -n : n;
	    i = len - 1;
	    while (i >= neg)
	    {
	        num[i] = (n % 10) + '0';
	        n /= 10;
	        i--;
	    }
	    if (neg)
	        num[0] = '-';
	    num[len] = '\0';
	}
	return (num);
}