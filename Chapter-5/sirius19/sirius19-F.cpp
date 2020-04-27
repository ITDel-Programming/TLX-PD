
#include<bits/stdc++.h>
using namespace std;
int main(){
    float angka;
    cin>>angka; 
    int fixnum= angka, ceilNum=0, floorNum=0;
    
        if(angka == fixnum){
            ceilNum = fixnum;
            floorNum = fixnum;
        }else if(fixnum < angka){
            floorNum = fixnum;
            ceilNum = fixnum + 1; 
        }else{
            floorNum = fixnum-1;
            ceilNum = fixnum ;
        }
    
    cout<<floorNum<<" "<<ceilNum<<endl;
    return 0;
}