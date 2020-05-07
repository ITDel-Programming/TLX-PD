#include <cstdio>
using namespace std;
int N=0, arr[1005], num,maxNum=-1,max=-1;

int main() {
  scanf("%d",&N);
  for (int i = 0; i < 1005; i++)arr[i]=0;
  
  while (N--) {
    scanf("%d",&num);
    arr[num]=arr[num]+1;
    if(arr[num]>max){
      max=arr[num];
      maxNum = num;
    }else if(arr[num]==max){
      if (num>maxNum)maxNum=num;
    }
  }
  printf("%d\n",maxNum);
}