#include<bits/stdc++.h>
using namespace std;
vector<int> data;
int main(){
    int n;
    cin>>n;
    for(int i = n ; i >0 ; i--){
        if(n%i == 0){
            data.push_back(i);
        }
    }
    for(int i = 0 ; i < data.size(); i++){
        cout<<data[i]<<endl;
    }
    return 0;
}