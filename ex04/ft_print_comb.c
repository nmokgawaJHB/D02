#include <unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_print_comb(void)

{ 
	char a;
	char b;
	char c;

	a='0';

	while (a <='7')
	{ 
		b = '1';

		while ( b <='8')
		{
			c = '2';

			while (c <='9')
			{
				if(a != b && a != c && b != c)
				{
					ft_putchar(a);
					ft_putchar(b);
					ft_putchar(c);
					ft_putchar(',');
					ft_putchar(' ');
				}
				c = c + 1;
			}
			b = b + 1;
		}
		a = a + 1;
	}

}

