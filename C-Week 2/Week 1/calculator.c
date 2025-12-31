#include <cs50.h>
#include <stdio.h>


int main(void)
{
    // int x = get_int("x: ");
    // int y = get_int("y: ");

    // printf("%i\n", x+y);



    // int x = get_int("x: ");

    // printf("%i\n", x*2);




    // long dollars = 1;
    // while(true)
    // {
    //     char c = get_char("Here's $%li. Double it and give it to the next person? ", dollars);
    //     if (c == 'y')
    //     {
    //         dollars *= 2;
    //     }
    //     else
    //     {
    //         break;
    //     }
    // }
    // printf("Here's $%li.\n", dollars);

    // float x = get_int("x: ");
    // float y = get_int("y: ");

    // printf("%f\n", x / y);

    int x = get_int("x: ");
    int y = get_int("y: ");

    printf("%.5f\n", (float) x / y);
}
