#include <stdio.h>
#include <cs50.h>

void meow(int n);

int main(void)
{
    // int i = 3;
    // while  (i>0)
    // {
    //     printf("meow\n");
    //     i--;
    // }
    // int i = 0;
    // while (i < 3)
    // {
    //     printf("meow\n");
    //     i++;

    // }
    // int i = 1;
    // while (i <= 3)
    // {
    //     printf("meow\n");
    //     i++;

    // }
    // for(int i = 1; i <= 3; i++)
    // {
    //     printf("meow\n");
    // }
    // while (true)
    // {
    //     printf("meow\n");
    // }
    // for(int i = 1; i <= 3; i++)
    // {
    //     meow();
    // }
    //meow(3);
    int n = get_int("Number: \n");
    meow(n);
}

// void meow(int n)
// {
//     for(int i = 1; i <= 3; i++)
//     {
//         printf("meow\n");
//     }
// }
 void meow(int n)
 {
    for(int i = 1; i < n; i++)
    {
        printf("meow \n");
    }
 }
