char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
size_t  i;
size_t  j;
if (needle[0] == '\0')
    return ((char *)haystack);
j = 0;
while (j < len && haystack[j])
    {
    i = 0;
    while (needle[i] && haystack[j] && needle[i] == haystack[j])
    {
        ++i;
        ++j;
    }
    if (needle[i] == '\0')
    return ((char *)&haystack[j - i]);
    j = j - i + 1;
    }
return (0);
}