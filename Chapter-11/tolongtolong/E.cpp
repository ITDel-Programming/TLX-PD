#include <string>
#include <cstring>
using namespace std;

int main() {
  char in[101];
  scanf("%s",in);
  for(int i=0;i<strlen(in);i++){
    if(in[i]<='z' && in[i]>='a'){
      in[i]+=('A'-'a');
    }else{
      in[i]-=('A'-'a');
    }
  }
  printf("%s\n",in);

  return 0;
}