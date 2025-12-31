#include <cs50.h>
#include <stdio.h>

void print_row(int n, int height);

int main(void)
{
    int height;

    do
    {
        height = get_int("Height: ");
    }
    while (height < 1);

    // Print the pyramid
    for (int i = 1; i <= height; i++)
    {
        print_row(i, height);
    }
}

void print_row(int n, int height)
{
    // Print spaces
    for (int i = 0; i < height - n; i++)
    {
        printf(" ");
    }

    // Print hashes
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }

    // New line after each row
    printf("\n");
}
