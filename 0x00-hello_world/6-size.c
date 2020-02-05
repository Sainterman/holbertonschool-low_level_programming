#include <stdio.h>
/**
* main- Entry point
*
* Return: always 0 (Success)
*/
int main(void)
{
int intSize;
long int longIntSize;
long long int longlongInt;
char charSize;
float floatSize;

printf("Size of a char: %ld byte(s)\n", sizeof(charSize));
printf("Size of an int: %ld byte(s)\n ", sizeof(intSize));
printf("Size of a long int: %ld byte(s)\n ", sizeof(longIntSize));
printf("Size of a long long int: %ld byte(s)\n ", sizeof(longLongInt));
printf("Size of a float: %ld byte(s)\n", sizeof(floatSize);
return (0);
}
