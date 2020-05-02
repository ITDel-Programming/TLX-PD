#include<bits/stdc++.h>
using namespace std;
int main(){
    string n;
    cin>>n;
    if(n.length() < 2){
        cout<<"satuan"<<endl;
    }else if (n.length() < 3){
        cout<<"puluhan"<<endl;
    }else if(n.length() < 4){
        cout<<"ratusan"<<endl;
    }else if(n.length() < 5){
        cout<<"ribuan"<<endl;
    }else{
        cout<<"puluhribuan"<<endl;
    }
    return 0;
}