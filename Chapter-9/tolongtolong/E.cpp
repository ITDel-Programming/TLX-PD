#include <cstdio>
using namespace std;

int N, M, P;
int matriksA[105][105],matriksB[105][105];

int main() {
  scanf("%d%d%d", &N, &M,&P);
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      scanf("%d", &matriksA[i][j]);
    }
  }
  for (int i = 0; i < M; i++) {
    for (int j = 0; j < P; j++) {
      scanf("%d", &matriksB[i][j]);
    }
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j <P; j++) {
      int sum=0;
      for(int k=0;k<M;k++){
        sum = sum + (matriksA[i][k]*matriksB[k][j]);
      }
      printf("%d",sum);
      if (j < P-1 ) {
        printf(" ");
      } else {
        printf("\n");
      }
    }
  }
}