#include <cs50.h>
#include <stdio.h>

// int main(void)
// {
//     string greet = get_string("What is your name? ");
//     printf("Hello %s! \n", greet);
// }

int main (int argc, string argv[])\
{
    /// printf("hello, %s\n", argv[1]);
    // if (argc == 2)
    // {
    //     printf("hello, %s\n", argv[1]);
    // }
    // else
    // {
    //     printf("Hello, world\n");
    // }
    for (int i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }
}
