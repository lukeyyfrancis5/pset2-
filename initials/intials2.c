#include <cs50.h>
#include <stdio.h>
#include <string.h>


int main(int argc, string argv[])
{

    //iterate over strings in argv
    for(int i = 0; i < argc; i++)
    {
        //iterate over characters in current string
        for(int j = 0; j < strlen(argv[i]); j++)
        {
            //prints the j'th character in a string
            printf("%c\n", toupper(argv[i][j]));
        }
            printf("\n");
    }
}