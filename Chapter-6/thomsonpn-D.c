#include <stdio.h>

 int main(){
     int input;
     int result = 0;

     while (scanf("%d", &input) != EOF)
     {
         result += input;
     }
     printf("%d\n", result);

     return 0;
}