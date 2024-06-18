#include <stdio.h>
#include <ctype.h>

int main()
{
    for (int x = 'A'; x <= 'Z'; x++)
    {
        putchar(tolower(x));
    }
    putchar('\n');
    return 0;
}
