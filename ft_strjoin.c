#include "libft.h"

char *ft_strjoin(char *s1, char *s2)
{
    static int i;
    static char *str;

    if (!str)
    {
        str = malloc((ft_strlen(s1) + ft_strlen(s2) + 1));
        if (!str)
            return NULL; 
    }

    if (*s1)
    {
        str[i++] = *s1++;
        ft_strjoin(s1, s2);
    }
    else if (*s2)
    {
        str[i++] = *s2++;
        ft_strjoin(s1, s2);
    }
    else
        str[i] = '\0'; 
    return (str);
}

