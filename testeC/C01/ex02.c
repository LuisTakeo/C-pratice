int	main(void)
{
	int	value1;
	int	value2;

	value1 = 4;
	value2 = 2;
	printf("%d %d \n", value1, value2);
	ft_swap(&value1, &value2);
	printf("%d %d", value1, value2);
	return (0);
}