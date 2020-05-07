#include <cstdio>
using namespace std;

int main(){
    double n;
    scanf("%lf",&n);
    if(n-int(n)==0.0){
        printf("%d %d\n",int(n),int(n));
    }else if(n<0.0){
        printf("%d %d\n",int(n)-1, int(n));
    }else{
        printf("%d %d\n",int(n), int(n)+1);
    }
    return 0;
}