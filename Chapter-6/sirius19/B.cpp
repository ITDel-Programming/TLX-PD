#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,angka,sum=0;
    cin>>n;
    while(n--){
        cin>>angka;
        sum+=angka;
    }
    cout<<sum<<endl;
    return 0;
}