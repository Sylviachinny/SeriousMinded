#include <stdio.h>
/**
 * main - prints the size of various types
 *
 * Return: 0
 */
int main(void)
{
	char k;
	int l;
	long int m;
	long long int n;
	float o;

	printf("Size of a char: %lu byte(s)\n", sizeof(k));
	printf("Size of an int: %lu byte(s)\n", sizeof(l));
	printf("Size of a long int: %lu byte(s)\n", sizeof(m));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(n));
	printf("Size of a float: %lu byte(s)\n", sizeof(o));
	return (0);
}
