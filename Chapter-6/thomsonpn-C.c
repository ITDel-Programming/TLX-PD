#include <stdio.h>

 int main(){
     int N, B;
     int result = 0;

     scanf("%d", &N);

     for (int i = 0; i < N; i++)
     {
         scanf("%d", &B);
         result += B;
     }
     
    printf("%d\n", result);

     return 0;
}