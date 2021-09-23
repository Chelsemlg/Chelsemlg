#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <limits.h>

#define TRUE 1
#define FALSE 0

int main()
{
    char buf;
    uint64_t point = 1;
    uint8_t sign = FALSE;
    while (
        (buf = getchar()) != EOF && buf != '\n' && buf != '\0')
    {
        switch (buf)
        {
        case '-':
            if (point == 1)
            {
                sign = TRUE;
            }
            else
            {
                printf("Error. Sign found in the value.\n");
                exit(-1);
            }
            break;
        case ' ':
            break;
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
            printf("%c", buf);
            break;
        case '.':
            printf("|");
            break;
        default:
            printf("\n\nError\n\n");
            exit(-1);
        }
    }
    printf("\n");
    exit(0);
}






























