#include <stdio.h>
#include <string.h>


int convCase(char* ch, int length)
{
    for (int i = 0; i < length; i++) {
        if ('a' <= ch[i] && ch[i] <= 'z') {
            ch[i] = ch[i] - 32;
        }
        else if ('A' <= ch[i] && ch[i] <= 'Z') {
            ch[i] = ch[i] + 32;
        }
    }
}


int main(void)
{
    char ch[100];
    printf("input> ");
    fgets(ch, sizeof(ch), stdin);
    convCase(ch, strlen(ch));

    printf("Output> %s", ch);
    return 0;

}