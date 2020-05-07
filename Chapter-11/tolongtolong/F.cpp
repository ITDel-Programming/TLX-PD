#include <string>
#include <cstring>
using namespace std;

int main() {
  char in[101],out[201];
  scanf("%s",in);
  for(int i=0,j=0;i<strlen(in);i++){
    if(in[i]=='_'){
      ++i;
      out[j++]=in[i]+('A'-'a');
    }else if (in[i]<='Z' && in[i]>='A'){
      out[j++]='_';
      out[j++]=in[i]-('A'-'a');
    }else{
      out[j++]=in[i];
    }
    out[j]='\0';
  }
  printf("%s\n",out);

  return 0;
}