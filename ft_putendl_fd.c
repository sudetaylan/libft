#include <unistd.h>
void ft_putendl_fd(char *s, int fd)
{
    char c;
    int i;

    c = '\n';
    i = 0;
    while (s[i] != '\0')
    {
        write(fd, &s[i], 1);
        i++;  
    }
    write(fd, &c, 1);
}
int main()
{
    char *s = "merhaba";
    ft_putendl_fd(s, 1);
}