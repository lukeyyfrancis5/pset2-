#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
// Get user input


// Prints initials of names entered
int main(void) {
    printf("What is your name?\n");
    string name = get_string();

// Iterate string and changes first
for(int i = 0; i < strlen(name); i++)
{
    if(i == 0)
    {
// Changes initial to uppercase
        printf("%c", toupper(name[i]));
    }
            printf("\n");

// If end of string does not = '\0' continue
    if(name[i] != '\0')
    {
        i++;
    }
            printf("%i\n", i);
}


// The End
}

/*TODO:
1. Search Command Line Arguments- to iterate second string
2. Program should print users initials in caps, no spaces
   no period followed by a new line.
*/