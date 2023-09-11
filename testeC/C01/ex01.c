
int	main(void)
{
	int	value;
    int *ptr1;
    int **ptr2;
    int ***ptr3;
    int ****ptr4;
    int *****ptr5;
    int ******ptr6;
    int *******ptr7;
    int ********ptr8;

    ptr1 = &value;
    ptr2 = &ptr1;
    ptr3 = &ptr2; 
    ptr4 = &ptr3; 
    ptr5 = &ptr4; 
    ptr6 = &ptr5; 
    ptr7 = &ptr6; 
    ptr8 = &ptr7; 
    ptr9 = &ptr8;
    ft_ultimate_ft(&ptr8);
    printf("%d", value);
	return (0);
}