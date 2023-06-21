#include <stdio.h>
/**
 * main - program to print size of data type
 * Description: size of diff. datatype
 * Return: 0(Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
	
	printf("Size of a char: %u byte(s)\n", sizeof(a));
	printf("Size of an int: %u byte(s)\n", sizeof(b));
	printf("Size of a long int: %u byte(s)\n", sizeof(c));
	printf("Size of a long long int: %u byte(s)\n", (sizeof(d));
	printf("Size of a float: %u byte(s)", (sizeof(f));
	return (0);
}
