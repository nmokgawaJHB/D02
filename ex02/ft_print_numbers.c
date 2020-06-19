#include <stdio.h>

void ft_print_numbers(void)
	
{ char numbers;
	numbers = '0';
		while (numbers <= '9') 
			putchar(numbers++);
}
int main(void)
{

ft_print_numbers();	
return 0;

}

