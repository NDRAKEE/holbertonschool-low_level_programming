#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - prints
*
* Description: zero positive_or_negative.
*
* Return: 0.
*/
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
 if( (n % 10) > 5 )
                printf("%d if the last digit of %d is greater than 5: the string and is greater than 5\n", n, n % 10 );
        else if ((n % 10) < 6 && ( n % 10 ) != 0 )
                printf ("%d if the last digit of %d  is less than 6 and not 0\n", n, n % 10 );
        else
                printf("%d if the last digit of %d  is 0: the string and is 0\n", n, n % 10 );

        return (0);
}
