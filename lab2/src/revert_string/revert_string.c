#include "revert_string.h"

void RevertString(char *str)
{
    int a=strlen(str);
    char *s = malloc(sizeof(char) * (a + 1));
    int i=0;
    while (i<a)
    {
        s[i]=str[i];
        i++;
    }
    i=0;
    while (i<a)
    {
        str[i]=s[a-i-1];
        i++;
    }
}

