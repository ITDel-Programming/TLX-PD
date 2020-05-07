#include <cstdio>
#include <string>
#include <iostream>
using namespace std;

int main() {
  string s, sub;
  cin>>s>>sub;
  while (s.find(sub)!=-1)
  {
    s.erase(s.find(sub),sub.length());
  }
  cout<<s<<endl;  
}