
#include<unistd.h>

void ft_print_comb(void);

int main (void) {
    ft_print_comb();
    
    return 0;
}

void ft_print_comb(void){
    char a = '0', b = '1', c = '2';
    char str[4] = {};
   
    while ((a <= '7') || (b <= '8') || (c <= '9')) {
        str[0] = a;
        str[1] = b;
        str[2] = c;

        if(a=='7' && b == '8' && c == '9')
        {
            str[3] = '\0';
        }
        else
        {
            str[3] = ',';
        }
        
        write(1, &str, sizeof(str));

        if(c != '9')
        {
            ++c;
        }
        else{
            if(b != '8')
            {
                ++b;
                c = b + 1;  
            }
            else
            {
                ++a;
                b = a + 1;
                c = b + 1; 
            }
        }
    }
}
