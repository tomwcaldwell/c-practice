#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Prompt user for char
    char c = get_char("Answer: ");

    switch(c)
    {
        case 'Y':
        case 'y':
            printf("yes\n");
            break;
        case 'N':
        case 'n':
            printf("no\n");
            break;
    }
}