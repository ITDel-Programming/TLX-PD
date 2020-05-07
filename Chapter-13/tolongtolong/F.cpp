#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
int m[128][128];
int nJawaban;
string jawaban[128*128];

// Cek apakah submatrix [r, c, r+k-1, c+k-1] sudah homogen
bool homogen(int r, int c, int k) {
   int val = m[r][c];
   for (int i = r; i < r+k; i++) {
      for (int j = c; j < c+k; j++) {
         if (m[i][j] != val) {
            return false;
         }
      }
   }
   return true;
}

void fillMatriks(int r, int c, int k, int val){
   for (int i = r; i < r+k; i++) {
      for (int j = c; j < c+k; j++) {
         m[i][j] = val;
      }
   }
}

// Kodekan submatrix [r, c, r+k-1, c+k-1]
void quadtree(int r, int c, int k, int pos, string s){
   if (pos+1>=(int)s.length()) {
      if(s[0]=='1'){
         fillMatriks(r,c,k,1);
      }
   } else if(s[pos+1]=='0'){
      // Belah
      quadtree(r, c, k/2,pos+1, s);
   } else if(s[pos+1]=='1'){
      quadtree(r, c+(k/2), k/2,pos+1, s);
   } else if(s[pos+1]=='2'){
      quadtree(r+(k/2),c,k/2,pos+1,s);
   } else if(s[pos+1]=='3'){
      quadtree(r+(k/2),c+(k/2),k/2,pos+1,s);
   }
}

int main(){

   scanf("%d",&nJawaban);
   for(int i=0;i<nJawaban;i++){
      cin>>jawaban[i];
   }
   int r, c;
   scanf("%d %d", &r, &c);

   // Cari 2^p yang >= max(r, c)
   int maxRc = max(r, c);
   int pow2 = 1;
   while (pow2 < maxRc){
      pow2 *= 2;
   }

   // Inisialisasi
   for (int i = 0; i < pow2; i++) {
      for (int j = 0; j < pow2; j++) {
         m[i][j] = 0;
      }
   }

   // Kodekan
   for(int i=0;i<nJawaban;i++)
      quadtree(0, 0, pow2,0, jawaban[i]);

   // Cetak
   for (int i = 0; i < r; i++)
   {
      for (int j = 0; j < c; j++)
      {
         if(j>0)printf(" ");
         printf("%d",m[i][j]);
      }
      printf("\n");
   }
   

   return 0;
}
