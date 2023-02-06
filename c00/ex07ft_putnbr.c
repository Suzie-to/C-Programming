#include<unistd.h>
#define ZERO_CHAR '0'

/*displays the number entered as a parameter*/
void ft_putnbr(int nb);

/*prints the character*/
void  ft_putchar(char c);

/*converts the integer into a char 
(using division & modular division to determine digits)*/
void ft_print_int(int);

int main()
{
    ft_putnbr(42);
    return 0;
}

void ft_putnbr(int nb)
{
    ft_print_int(nb);
}

void  ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_print_int(int num)
{
    ft_putchar((char)(num/10) + ZERO_CHAR);
    ft_putchar((char)(num%10) + ZERO_CHAR);
}