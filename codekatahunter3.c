#include <stdio.h>

int main()
{
    int number;
    scanf("%d", &number);
    int ko;
    int found = 0;

    for(int i = 0; i < number; i++) {
        scanf("%d", &ko);
        if(ko == i) {
            printf("%d ", ko);
            found = 1;
        }
    }

    if(!found) printf("-1");
    return 0;
}
