#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Prompt for value x
    float x = get_float("x: ");

    // Prompt for value y
    float y = get_float("y: ");

    printf("%.0f divided by %.0f is %.1f\n", x, y, x / y);
}