#include<bits/stdc++.h>
using namespace std;
bool akar(int n){

    if(n==1){
        return true;
    }
    if(n%2 == 0){
        return akar(n/2);
    }else{
        return false;
    }

}
int main(){
    int n;
    cin>>n;
    if(akar(n)){
        cout<<"ya"<<endl;
    }else{
        cout<<"bukan"<<endl;
    }
    return 0;
}