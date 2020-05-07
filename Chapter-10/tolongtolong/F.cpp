#include <cstdio>
using namespace std;

int f(int x1,int y1,int x2,int y2,int D){
  int a = x2 - x1;
  int b = y2 - y1;
  if (a<0)a*=-1;
  if (b<0)b*=-1;
  int reta=1, retb=1;
  for(int i=0; i<D;i++){
    reta*=a;
    retb*=b;
  }
  return reta + retb;
}

int main() {
  int N, D, max=-1, min=9999999, inp[1001][2];
  scanf("%d %d", &N, &D);
  for(int i=0;i<N;i++){
    scanf("%d %d",&inp[i][0], &inp[i][1]);
    for(int j=0;j<i;j++){
      int cost = f(inp[i][0],inp[i][1],inp[j][0],inp[j][1],D);
      if (cost>max) max = cost;
      if (cost<min) min = cost;
    }
  }
  printf("%d %d\n",min,max);
}