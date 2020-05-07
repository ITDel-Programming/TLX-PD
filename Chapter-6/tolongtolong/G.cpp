#include <cstdio>
using namespace std;

int main(){
    int n,min=999999,max=-999999,num;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&num);
        if(num<min)min=num;
        if(num>max)max=num;
    }
    printf("%d %d\n",max,min);
    return 0;
}