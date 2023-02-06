#include <unistd.h>


void ft_putchar(char c);
void ft_is_negative(int n);


int main(){
    int x;
    //x = 1;
    ft_is_negative(x);
    return 0;
}


/*displays the character passed as a parameter*/    
void ft_putchar(char c){
    write(1, &c, 1);
}

void ft_is_negative(int n){
    if(n>=0){
        ft_putchar('P');
    }
    else{
        ft_putchar('N');
    }
}