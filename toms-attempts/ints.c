#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Prompt for value x
    int x = get_int("x: ");

    // Prompt for value y
    int y = get_int("y: ");

    printf("%i plus %i is %i\n", x, y, x + y);
    printf("%i minus %i is %i\n", x, y, x - y);
    printf("%i multiplied by %i is %i\n", x, y, x * y);
    printf("%i divided by %i is %i\n", x, y, x / y);
    printf("remainder of %i divided by %i is %i\n", x, y, x % y);
}