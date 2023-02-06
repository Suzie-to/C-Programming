/*displays a string of characters on the standard output*/
#include<unistd.h>

void ft_putstr(char *str);
void ft_putchar(char c);
void    ft_putstr_ptr(char *str);
int main(void)
{
    char arr[5] = "asdf";
    ft_putstr(arr);
    return  (0);
}

void ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
}
void ft_putchar(char c){
    write(1, &c, 1);
}


void    ft_putstr_ptr(char *str)
{
    while (*str != '\0')
    {
        ft_putchar(*str);
        str++;
    }
}