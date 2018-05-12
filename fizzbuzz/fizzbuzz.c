#include <stdio.h>

void fizzbuzz()
{
    for (int i = 1; i <= 100; i++)
    {
        if ((i % 3 == 0) && (i % 5 == 0))
        {
            printf("FizzBuzz\n");
        } else if (i % 3 == 0)
        {
            printf("Fizz\n");
        } else if (i % 5 == 0)
        {
            printf("Buzz\n");
        } else
        {
            printf("%i\n", i);
        }
    }

    // for(int i = 1; i <= 100; i++)
    // {
    //     if (!(i % 3) && !(i % 5))
    //     {
    //         printf("FizzBuzz\n");
    //     }
    //     else if (!(i % 3))
    //     {
    //         printf("Fizz\n");
    //     }
    //     else if (!(i % 5))
    //     {
    //         printf("Buzz\n");
    //     }
    //     else
    //     {
    //         printf("%i\n", i);
    //     }
    // }
}

int main(void)
{
    fizzbuzz();
}