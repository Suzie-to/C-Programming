#include <unistd.h>


void ft_putchar(char);
void ft_print_numbers(void);

int main(){
    ft_print_numbers();
    return 0;
}

/*displays all digits, on a single line, by ascending order*/
void ft_print_numbers(void)
{
    char digit;
    digit = 0;
    while(digit <= '9')
    {
        ft_putchar(digit);
        digit++;
    }
}
/*displays the character passed as a parameter*/    
void ft_putchar(char c)
{
    write(1, &c, 1);
}