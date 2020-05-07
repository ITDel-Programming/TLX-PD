#include <cstdio>
using namespace std;

int main(){
    int n,num=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
       for (int j = 0; j<=i; j++){
           printf("%d",(num++)%10);
       }
       printf("\n");
    }
    return 0;
}