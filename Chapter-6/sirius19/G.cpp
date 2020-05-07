#include<bits/stdc++.h>
using namespace std;
int main(){
    int maxi = INT_MIN, mini= INT_MAX, n, angka;
    cin>>n;
    while(n--){
        cin>>angka;
        if(angka > maxi){
            maxi = angka;
        }
        if(angka < mini){
            mini = angka;
        }
    }
    cout<<maxi<<" "<<mini<<endl;
    return 0;
}