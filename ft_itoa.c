#include <stdlib.h>
#include <stdio.h>

long int	ft_np(long int n)
{
    if (n < 0)
        n = -n;
	return (n);
}

int			ft_len(long int n)
{
	int	len;

	len = 0;
    if(n <= 0)
        len = 1;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	int		len;
	int		sign;
	char	*c;

	sign = 1;
    if (n < 0)
        sign = -1;
	len = ft_len(n);
	c = (char *)malloc(len + 1);
	c[len] = '\0';
	len--;
	while (len >= 0)
	{
		c[len] = '0' + ft_np(n % 10);
		n = ft_np(n / 10);
		len--;
	}
	if (sign == -1)
		c[0] = '-';
	return (c);
}
int main()
{
    printf("%s",ft_itoa(-12));
}