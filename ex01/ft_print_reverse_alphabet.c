#include <unistd.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return 0;
}
void ft_print_reverse_alphabet(void)
{
	char letter = 'z';
	while (letter >= 'a')
	{
		ft_putchar(letter);
		letter = letter - 1;
	}
}
