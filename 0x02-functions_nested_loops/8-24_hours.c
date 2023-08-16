#include"main.h"
/**
*jack_bauer-prints every minute of the day
*/
void jack_bauer(void)
{
int min, H;
for (H = 0; H <= 23; H++)
{
for (min = 0; min <= 59; min++)
{
_putchar((H / 10) + 48);
_putchar((H % 10) + 48);
_putchar(':');
_putchar((min / 10) + 48);
_putchar((min % 10) + 48);
_putchar('\n');
}
}
}
