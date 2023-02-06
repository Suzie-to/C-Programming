
/*swaps the value of two integers*/
void ft_swap(int *a, int *b);

int main(void)
{
    int val1;

    int val2;

    val1 = 20;
    val2 = 10;

    ft_swap(&val1, &val2);

    return (0);
}

void    ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}