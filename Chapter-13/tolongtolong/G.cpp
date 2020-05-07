#include <cstdio>
using namespace std;
bool visited[26][26];
int maps[26][26], M, N, B, K;
int count=0;

void floodFill(int x, int y, int c){
   if(x<M && x>=0 && y>=0 && y<M){
      if(!visited[x][y]){
         visited[x][y]=true;
         if(maps[x][y]==c){
            count++;
            floodFill(x-1,y,c);
            floodFill(x+1,y,c);
            floodFill(x,y+1,c);
            floodFill(x,y-1,c);
         }
      }
   }  
}

int main(){
   scanf("%d %d",&N,&M);

   for(int i=0;i<N;i++){
      for (int j = 0; j < M; j++)
      {
         scanf("%d",&maps[i][j]);
      }
   }
   scanf("%d %d",&B,&K);
   floodFill(B,K,maps[B][K]);
   printf("%d\n",count*(count-1));
   return 0;
}
