#include <unistd.h>

int ft_putchar(char c)
{
	write (1, &c, 1);
	return 0;
}
void ft_print_numbers(void)
{
	char number = '0';
	while (number <= '9')
{
	ft_putchar(number);
	number = number + 1;
	}
}
