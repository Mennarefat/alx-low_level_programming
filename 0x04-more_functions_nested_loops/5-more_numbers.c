#include"main.h"
/**
*more_numbers-print 0-14 ten times
*
*Return:always 0(success)
*/
void more_numbers(void)
{
int n, r, c;
for (r = 1; r <= 10; r++)
{
for (n = 0; n <= 14; n++)
{
c = n;
if (n > 9)
{
_putchar(1 + 48);
c = n % 10;
}
_putchar(c + 48);
}
_putchar('\n');
}
}

