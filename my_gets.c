#include <stdio.h>

char * my_gets(char *text)
{
    char ch;
    int i = 0;

    while( (ch = getchar()) != '\n')
    {
        *(text + i) = ch;
        i++;
    }

    *(text + i) = '\0';

    return text;
}

int main(void)
{
    char text[1024];

    printf("Enter your text\n");
    my_gets(text);
    printf("You entered: %s\n",text);

    return 0;
}
