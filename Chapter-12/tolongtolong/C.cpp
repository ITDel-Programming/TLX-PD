#include <cstdio>
#include <cmath>
using namespace std;
int A, B;
int f(int x,int k){
  if(k==0)return x;
  else return abs(A*f(x,k-1)+B);
}
int main() {
  int k, x;
  scanf("%d %d %d %d", &A, &B, &k, &x);
  printf("%d\n",f(x, k));
}