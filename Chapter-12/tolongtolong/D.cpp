#include <cstdio>
#include <string>
#include <iostream>
using namespace std;

bool palindromKah(string s){
  int ln = s.length();
  if(ln>=2){
  
  string subs = s.substr(1,ln-2);
  return (s[0]==s[ln-1]) && palindromKah(subs);
  }
  return true;
}

bool palindromNyahh(string s, int pos){
  int ln = s.length();
  if(pos!=ln-1){
    return (s[pos]==s[ln-1-pos]) && palindromNyahh(s,pos+1);
  }
  return true;
}


int main() {
  string input;
  cin>>input;
  if(palindromNyahh(input,0)){
    printf("YA\n");
  }else{
    printf("BUKAN\n");
  }
}