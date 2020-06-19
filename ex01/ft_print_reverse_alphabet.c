#include <stdio.h>

void ft_print_reverse_alphabet(void)

{ char letter;
letter = 'z';
while (letter >= 'a')
{putchar(letter--);}
}
int main(){
	ft_print_reverse_alphabet();
	return 0; }
