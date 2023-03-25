#include "main.h"
#include <stdio.h>
#include <stdarg.h>

int c_printf(char *str, ...)
{
    int arg_count;
    char *str_copy;

    str_copy = str;
    arg_count = 0;
    while(*str_copy != '\0')
    {
        if (*str_copy == 37)
        {
            arg_count++;
            str_copy++;
            switch(*str_copy)
            {
                case 's':
                    {
                        printf("string\n");
                        str_copy++;
                        break;
                    }
                case 'c':
                    {
                        printf("character\n");
                        str_copy++;
                        break;
                    }
                case 'd':
                    {
                        printf("int\n");
                    
                        break;
                    }
                case 'f':
                    {
                        printf("float\n");
                        break;
                    }
                default:
                    continue;
                    
            }
                
        }
        else
        {
            str_copy++;
        }
    }
    printf("%s\n", str);
    printf("argument count %d\n", arg_count);
    return (1);
}

int main(void)
{
    c_printf("K%sosgei Victo%dr%f", 1, 32, 43);

    return (0);
}
