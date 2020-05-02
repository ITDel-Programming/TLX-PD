#include <stdio.h>

 int main(){
    float input;

    scanf("%f", &input);
    while (input >= 2)
    {
        input /= 2;
    }

    if (input == 1)
    {
        printf("ya\n");
    }
    else
    {
        printf("bukan\n");
    }

    return 0;
}