#include <cstdio>
using namespace std;

int f(int x, int A, int B){
  int ret = A*x +B;
  if (ret<0)ret*=-1;
  return ret;
}

int main() {
  int A, B, K, x;
  scanf("%d %d %d %d",&A, &B, &K, &x);
  int result=f(x,A,B);
  for(int i=0;i<K-1;i++) result = f(result,A,B);

  printf("%d\n",result);
}