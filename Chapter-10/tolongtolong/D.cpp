#include <cstdio>
using namespace std;

int main() {
  int n;
  scanf("%d",&n);
  int p = 2, first=1,m=n;
  while(n!=1){
    int count=0;
    while(n%p==0){
      count++;
      n/=p;
    }
    if(count>0){
      if(first) first=0;
      else printf(" x ");
      if(count>1)printf("%d^%d",p,count);
      else printf("%d",p);
    }
    p++;
  }
  if(m==1)printf("1");
  printf("\n");
}