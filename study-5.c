#include <stdio.h>
#include <stdlib.h>


char tchar(char c)
{
    switch (c) {

    case '0': case '1': case '2': case '3': case '4': case '5': case '6':
    case '7': case '8':
        return c + 1;
    case '9':
        return c - 9;
    case 'B': case 'C': case 'D': case 'E': case 'F': case 'G': case 'H':
    case 'I': case 'J': case 'K': case 'L': case 'M': case 'N': case 'O':
    case 'P': case 'Q': case 'R': case 'S': case 'T': case 'U': case 'V':
    case 'W': case 'X': case 'Y': case 'Z':
        return c - 1;
    case 'A':
        return c + 25;
    case 'a': case 'b': case 'c': case 'd': case 'e': case 'f': case 'g':
    case 'h': case 'i': case 'j': case 'k': case 'l': case 'm': case 'n':
    case 'o': case 'p': case 'q': case 'r': case 's': case 't': case 'u':
    case 'v': case 'w': case 'x': case 'y': case 'z':
        return c - 32;
    default: return c;
    }
}
int main(void)
{
    char c;

    // digits
    for (c = '0'; c <= '9'; c++)
        printf("%c->%c,", c, tchar(c));

    // upper lettters
    for (c = 'A'; c <= 'Z'; c++)
        printf("%c->%c,", c, tchar(c));

    // lower lettters
    for (c = 'a'; c <= 'z'; c++)
        printf("%c->%c,", c, tchar(c));

    // others
    for (c = '!'; c <= '/'; c++)
        printf("%c->%c,", c, tchar(c));
    for (c = ':'; c <= '@'; c++)
        printf("%c->%c,", c, tchar(c));
    for (c = '['; c <= '`'; c++)
        printf("%c->%c,", c, tchar(c));
    for (c = '{'; c <= '~'; c++)
        printf("%c->%c,", c, tchar(c));
    printf("\n");

    return EXIT_SUCCESS;
}
