#include <unistd.h>

int ft_putchar(char c);
void ft_print_comb(void);
int main()
{
	ft_print_comb ();
	ft_putchar('\n');
	return 0;
}

int ft_putchar(char c)
{
	write(1, &c, 1);
	return 0;
}

void	ft_print_comb (void)
{
	char	first;
	char	second;
	char	third;

	first = '0' - 1;
	while (++first <= '9')
	{
		second = first;
		while (++second <= '9')
		{
			third = second + 1;
			while (third <= '9')
			{
				ft_putchar(first);
				ft_putchar(second);
				ft_putchar(third);
				if (first != '7' || second != '8' || third != '9')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				third++;
			}
		}
	}
}
