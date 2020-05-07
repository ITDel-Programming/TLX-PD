#include <cstdio>
using namespace std;
int N=0, arr[105];

int main() {
  while (scanf("%d", &arr[N]) != EOF) {
    N++;
  }
  for(int i=N-1;i>=0;i--){
    printf("%d\n",arr[i]);
  }
}