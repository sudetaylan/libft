char *strchr(const char *str, int ch)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if(str[i] == ch)
            return str;    
    }
}