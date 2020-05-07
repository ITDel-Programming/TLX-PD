#include <cstdio>
using namespace std;

int NOTES[10], N, K;
bool EVER_BEEN[10];

void f(int deep){
  if(deep>=K){
      bool cetak=true;
      for (int i = 1; i<K; i++){
        if(NOTES[i]<NOTES[i-1])cetak=false;
      }
      if(cetak){
        for (int i = 0; i<K; i++)
        {
          if(i>0)printf(" ");
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


void f2(int deep){
  if(deep>=K){
    for (int i = 0; i<K; i++)
    {
      if(i>0)printf(" ");
      printf("%d",NOTES[i]);
    }
    printf("\n");
  }else{
    for (int i = NOTES[deep-1]+1; i <=N; i++)
    {
        NOTES[deep]=i;
        f2(deep+1);
    }
  }
  
}

int main() {
  scanf("%d %d",&N,&K);
  f2(0);
}