/**
 * print_alphabet_x10 - Prints the alphabet, in lowercase, 10 times.
 */
void print_alphabet_x10(void)
{
	int loopcount;
	char lowercase_alphabet;

	loopcount = 0;
	while (loopcount < 10)
	{
		lowercase_alphabet = 'a';
		while (lowercase_alphabet <= 'z')
		{
			_putchar(lowercase_alphabet);
			lowercase_alphabet++;
		}
		loopcount++;
		_putchar('\n');
	}
}
