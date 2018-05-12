// Floating-point arithmetic

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Prompt user for x
    float x = get_float("x: ");

    // Propt user for y
    float y = get_float("y: ");

    // Perform division
    printf("%.0f divided by %.0f is %.1f\n", x, y, x / y);
}