#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Prompt user for char
    char c = get_char("Answer: ");

    if (c == 'y' || c == 'Y')
    {
        printf("yes\n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("no\n");
    }
    else
    {
        printf("not applicable\n");
    }
}