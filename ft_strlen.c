#include "libft/h"
int ft_strlen(char *str)
{
    static int i;
    
    if(!str)
        return -1;
    if(str[i++] != '\0')
        ft_strlen(str);
    return (i - 1);
}
