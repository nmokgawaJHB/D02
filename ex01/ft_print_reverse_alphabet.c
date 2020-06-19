#include <unistd.h>

int ft_putchar(char letter);
	 write(1, &letter,1);

void ft_print_reverse_alphabet(void)


{int  letter;
 letter = 'z';
while (letter >= 'a')
{

ft_putchar(letter--);
}}

