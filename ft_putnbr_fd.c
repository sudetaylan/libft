#include <unistd.h>
void ft_putnbr_fd(int n, int fd)
{
    char sign;
  
    if (n == -2147483648)
        write(fd, "-2147483648", 11);
    if (n < 0 && n != -2147483648)
    {
        sign = '-';
        n = -n;
        write (fd, &sign, 1);    
    }
    while (n >= 10)
    {
        ft_putnbr_fd(n / 10, 1);
        n = n % 10;
    }
    while (n < 10 && n >= 0)
    {
        n = n + '0';
        write(fd, &n, 1);        
    }
}
int main()
{
    ft_putnbr_fd(23022005,1);
}