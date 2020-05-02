#include <stdio.h>

 int main(){
    int N, input;
    int terbesar, terkecil;

    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &input);

        if (i == 0)
        {
            terbesar = input;
            terkecil = input;
        }

        if (terbesar < input)
        {
            terbesar = input;
        }
        if (terkecil > input)
        {
            terkecil = input;
        }
    }

    printf("%d %d\n", terbesar, terkecil);
    return 0;
}