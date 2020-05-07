#include<bits/stdc++.h>
using namespace std;
int arr[4][4];
int main(){
    for(int i = 0 ; i < 3; i++){
        for(int j = 0 ; j <3; j++){
            cin>>arr[i][j];
        }
    }
     for(int i = 0 ; i < 3; i++){
        for(int j = 0 ; j <3; j++){
            if(j!=0){cout<<" ";}
            cout<<arr[j][i];
        }
        cout<<endl;
    }

    return 0;
}