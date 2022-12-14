#include "main.h"
/**
  * main - Entry point
  * Description:prints '_putchar\n'
  * Return: Always 0 (success)
  */
int main(void)
{
	char c[9] = "_putchar\n";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(c[i]);
	}
	return (0);
}
