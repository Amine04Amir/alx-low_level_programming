#include <stdio.h>
/**
  *main - Entry point
  *Return: 0 always (success)
  */
int main(void)
{
	printf("Size of a char: %lu byte(s)", sizeof(char));
	printf("size of an int: %lu byte(s)", sizeof(int));
	printf("size of a long: %lu byte(s)", sizeof(long int));
	printf("size of a long long: %lu byte(s)", sizeof(long long int));
	printf("size of a float: %lu byte(s)", sizeof(float));
	return (0);
}
