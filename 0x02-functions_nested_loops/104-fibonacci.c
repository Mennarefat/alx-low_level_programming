#include"main.h"
/**
*numLength-returns the length of string
*
*@num:operand number
*
*Return:number of digits
*/
int numLength(int num)
{
int l = 0;
if (!num)
return (1);
while (num)
{
num = num / 10;
l += 1;
}
return (l);
}
/**
*main-Entry point
*
*Return:0(success)
*/
int main(void)
{
int c, initial0s;
unsigned long f1 = 1, f2 = 2, sum, mx = 100000000, f10 = 0, sum0 = 0;
for (count = 1; count <= 98; count++)
{
if (f10 > 0)
printf("%lu", f10);
initial0s = numLength(mx) - 1 - numLength(f1);
while (f10 > 0 && initial0s > 0)
{
printf("%d", 0);
initial0s--;
}
printf("%lu", f1);
sum = (f1 + f2) % mx;
sum0 = f10 + f20 + (f1 + f2) / mx;
f1 = f2;
f10 = f20;
f2 = sum;
f20 = sum0;
if (count != 98)
printf(", ");
else
printf("\n");
}
return (0);
}


