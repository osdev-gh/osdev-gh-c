#include <stdio.h>

#define INTRO_TEXT \
    "This program demonstrates why you should never use gets() as it is\n" \
    "unsafe. It does not check for buffer overruns.\n\n" \
    "You will be asked to enter a string. Enter more than 5 characters to\n" \
    "see the effects of a buffer overrun.\n\n"

int main()
{
    int i;
    char s[5];

    i = 78;

    printf(INTRO_TEXT);
    printf("Before intput, value of integer is: %d\n", i);
    printf("Enter a string: ");
    gets(s);

    printf("You entered: %s\n", s);
    printf("Now the value of the integer is: %d\n");
    printf("If the value has changed then gets() overran its buffer.\n");

    return 0;
}
