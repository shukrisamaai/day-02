#include <unistd.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return 0;
}
void ft_print_alphabet(void)
{
	char letter = 'a';
	while (letter <= 'z')
	{
		ft_putchar(letter);
		letter = letter + 1;
	}
	int main()
	{
		ft_putchar();
		return 0;
	}
}
