#include<bits/stdc++.h>
using namespace std;
int main(){
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    x1=x1-x2;
    y1=y1-y2;
    if(x1 < 0){
        x1*=-1;
    }
    if(y1 < 0){
        y1*=-1;
    }
    cout<<x1+y1<<endl;
    return 0;
}