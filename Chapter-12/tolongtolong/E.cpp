#include <cstdio>
#include <string>
#include <iostream>
using namespace std;

string toBiner(int N){
  if(N==1)return "1";
  else if(N%2)return toBiner(N/2)+"1";
  else return toBiner(N/2)+"0";
}

int main() {
  int n;
  scanf("%d",&n);
  printf("%s\n",toBiner(n).c_str());
}