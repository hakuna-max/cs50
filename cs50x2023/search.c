#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // int number[] = {20, 500, 10, 5, 100, 1, 50};
    string strings[] = {"battleship", "boot", "cannon", "iron", "thimble", "top hat"};

    // int n = get_int("number: ");

    string s = get_string("String: ");

    for (int i = 0; i < 7; i++)
    {
        // if (number[i] == n)
        if (strcmp(strings[i], s) == 0)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}