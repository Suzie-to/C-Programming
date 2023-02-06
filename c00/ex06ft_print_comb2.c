#include <unistd.h>

#define MAX_NUM1    98 
#define MAX_NUM2    99
#define SPACE       ' '       
#define ZERO_CHAR   '0'

/*print characters*/
void  ft_putchar(char c);

void ft_print_int(int num);

/*print the unique combinations of two numbers by finding each digit
 through modular division and then casting it back to char*/
void ft_print_comb2(void);


int main()
{
  ft_print_comb2();
  
  return 0;
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

void ft_print_comb2(void)
{
  int num1;
  int num2;

  num1 = 0;
  while (++num1 <= MAX_NUM1)
  {
    num2 = num1;
    while (++num2 <= MAX_NUM2)
    {
      ft_print_int(num1);

      ft_putchar(SPACE);

      ft_print_int(num2);
      
      
      if(num1 != MAX_NUM1)
      {
        ft_putchar(',');
        ft_putchar(SPACE);
      }
      
    }
  }
}