#include<stdio.h>
#include<ctype.h>

int main()
{
    char input;
    scanf("%c",&input);
    if(isalpha(input))
        printf("Alphabet");
    else 
    printf("No");
    return 0;
}
