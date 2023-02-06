
// #include <unistd.h>


// void ft_putchar(char c);
// void ft_print_alphabet(void);

// int main(){
//     ft_print_alphabet();
//     return 0;
// }

// /* displays the alphabet in lowercase, on a single line, by
// ascending order, starting from the letter ’a’ 
// using ASCII to loop through the alphabet*/
// void ft_print_alphabet(void){
//     char c;
//     int i;
//     for(i = 97; i<=122; i++){
//         c = i;
//         ft_putchar(c);
//     }
// }
// /*displays the character passed as a parameter*/    
// void ft_putchar(char c){
//     write(1, &c, 1);
// }


#include <unistd.h>


/*displays the character passed as a parameter*/    
void ft_putchar(char c){
    write(1, &c, 1);
}

/* displays the alphabet in lowercase, on a single line, by
ascending order, starting from the letter ’a’ 
using ASCII to loop through the alphabet*/
void ft_print_alphabet(void){
    char c;
    int i;
    for(i = 97; i<=122; i++){
        c = i;
        ft_putchar(c);
    }
}
int main(){
    ft_print_alphabet();
    return 0;
}

