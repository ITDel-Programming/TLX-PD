#include <cstdio>
using namespace std;

void f(int n){
  if(n==1)printf("*\n");
  else
  {
    f(n-1);
    for (int i = 0; i < n; i++)
    {
      printf("*");
    }
    printf("\n");
    f(n-1);
  }
  
}

void f2(int n){
  if(n>0){
    f2(n-1);
    for (int i = 0; i < n; i++)
    {
      printf("*");
    }
    printf("\n");
    f2(n-1);
  }
}

int main() {
  int n;
  scanf("%d",&n);
  f2(n);
}