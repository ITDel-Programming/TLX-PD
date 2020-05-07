#include <cstdio>
using namespace std;

int f(int n){
  if(n==1)return 1;
  else if(n%2) return (n)*f(n-1);
  else return n/2*f(n-1);
}

int main() {
  int n;
  scanf("%d",&n);
  printf("%d\n",f(n));
}