#include <string.h>
#include <stdio.h>
#include <stdlib.h>
char *ft_strtrim(char const *s1, char const *set)
{
    size_t i;
    size_t j;
    size_t k;
    size_t n;
    char *new_str;

    i = 0;
    j = 0;
    n = strlen(set);
    while (s1[i] == set[i])
        i++;
    k = strlen(s1) - 1;
    while (s1[k] && set[--n] && s1[k] == set[n])
        k--;
    new_str = (char *)malloc(k - i + 2);
    if (!new_str)
        return 0;
    while (i <= k)
        new_str[j++] = s1[i++];
    new_str[j] = '\0';
    return(new_str);
}
int main()
{
    const char *s1 = "";
    const char *set = "";
    printf("%s",ft_strtrim(s1,set));
}