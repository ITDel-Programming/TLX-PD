#include <cstdio>
using namespace std;

int N, T;
int matriks[2][1001];

void swap(int &a, int &b){
  int tmp = a;
  a = b;
  b = tmp;
}

int main() {
  scanf("%d",&N);
  for(int i=0;i<2;i++){
    for(int j=0;j<N;j++){
      scanf("%d",&matriks[i][j]);
    }
  }

  scanf("%d",&T);
  while(T--){
    char P[5],Q[5];
    int x, y;
    scanf("%s %d %s %d",P, &x, Q, &y);
    int p = P[0]-'A', q = Q[0]-'A';
    swap(matriks[p][--x],matriks[q][--y]);
  }

  for(int i=0;i<2;i++){
    for(int j=0;j<N;j++){
      printf("%d",matriks[i][j]);
      if(j+1<N) printf(" ");
    }
    printf("\n");
  }
}