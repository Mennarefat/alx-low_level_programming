#include<stdio.h>
/**
*main-Entry point
*
*Description:using sizeof to print the size of various types.
*
*Return:0(success)
*/
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;
printf("size of a char: %ld byte(s)\n", (unsigned long)sizeof(a));
printf("size of an int: %ld byte(s)\n", (unsigned long)sizeof(b));
printf("size of a long int: %ld byte(s)\n", (unsigned long)sizeof(c));
printf("size of a long long int: %ld byte(s)\n", (unsigned long)sizeof(d));
printf("size of a float: %ld byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
