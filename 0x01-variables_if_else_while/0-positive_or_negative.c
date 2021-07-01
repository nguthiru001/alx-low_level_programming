#include <stdlib.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - this function checks the state of  random number assigned to n
 * betty style doc for function main goes there
 * Return: the function returns 0
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}
return (0);
}
