#include <cstdio>
using namespace std;

int NOTES[10], N;
bool EVER_BEEN[10];

void f(int deep){
  if(deep>=N){
    bool zigzag=true;
    for (int i = 1; zigzag && i < N-1; i++){
      bool higher=(NOTES[i]>NOTES[i-1] && NOTES[i]>NOTES[i+1]);
      bool lower=(NOTES[i]<NOTES[i-1] && NOTES[i]<NOTES[i+1]);
      if(not (higher || lower)){
          zigzag=false;
      }
    }
    
    if(zigzag){
      for (int i = 0; i<N; i++)
      {
        printf("%d",NOTES[i]);
      }
      printf("\n");
    }
  }else
  {
    for (int i = 1; i <=N; i++)
    {
      if(!EVER_BEEN[i]){
        EVER_BEEN[i]=true;
        NOTES[deep]=i;
        f(deep+1);
        EVER_BEEN[i]=false;
      }
    }
  }
  
}

int main() {
  scanf("%d",&N);
  f(0);
}