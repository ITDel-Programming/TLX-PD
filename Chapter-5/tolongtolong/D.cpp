#include <cstdio>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    if(n==0){
        printf("nol\n");
    }else if(n>0){
        printf("positif\n");
    }else{
        printf("negatif\n");
    }
    return 0;
}