#include <stdio.h>
int main(void) {

    char myName[7] = {'c', 'o', 'l', 't', 'e', 'n', '\0'};

    printf("\nhello, world\nmy name is ");

    for (int i = 0; i < sizeof(myName); ++i)
    {
        printf("%c", myName[i]);
    }

    return 0;
}