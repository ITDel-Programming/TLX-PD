#include <cstdio>
using namespace std;

int main(){
    int n,i;
    scanf("%d",&n);
    for(i=2;i<n;i*=2);
    if(i==n || n==1){
        printf("ya\n");
    }else{
        printf("bukan\n");
    }

    return 0;
}