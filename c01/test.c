
void ft_ultimate_ft(int *********nbr);

int main(void)
{
    int val = 0;
    int *ptr1 = &val;
    int **ptr2 = &ptr1;
    int ***ptr3 = &ptr2;
    int ****ptr4 = &ptr3;
    int *****ptr5 = &ptr4;
    int ******ptr6 = &ptr5;
    int *******ptr7 = &ptr6;
    int ********ptr8 = &ptr7;

    function(&ptr8);
    return (0);
}

void ft_ultimate_ft(int *********nbr)
{
    int val;

    val = 5;
    *********nbr = val;
}