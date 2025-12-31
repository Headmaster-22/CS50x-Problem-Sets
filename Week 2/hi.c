#include <stdio.h>
#include <cs50.h>
int main(void)
{
    // char c1 = 'H';
    // char c2 = 'I';
    // char c3 = '!';

    // printf("%i %i %i\n", c1, c3, c3);

    // string s = "Hi!";
    // string t = "Bye!";
    //printf("%s\n", s);
    //printf("%c%c%c\n", s[0], s[1], s[2]);
    //printf("%i %i %i %i %i \n", s[0], s[1], s[2], s[3], s[4]);


    string words[2];
    words[0] = "Hi!";
    words[1] = "Bye!";


    // printf("%s\n", words[0]);
    // printf("%s\n", words[1]);
    printf("%c%c%c\n", words[0][0], words[0][1], words[0][2]);
    printf("%c%c%c%c\n", words[1][0], words[1][1], words[1][2], words[1][3]);

}
