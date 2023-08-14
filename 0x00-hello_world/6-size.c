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
printf("size of char: %ld byte(s)\n", sizeof(a));
printf("size of int: %ld byte(s)\n", sizeof(b));
printf("size of l int: %ld byte(s)\n", sizeof(c));
printf("size of ll int: %ld byte(s)\n", sizeof(d));
printf("size of float: %ld byte(s)\n", sizeof(f));
return (0);
}
