#include <iostream>

using namespace std;

int main()
{
    long n;
    cin >> n;
    cout<<(( n && !(n&(n-1) ))?"ya":"bukan")<<endl;
    

    return 0;
}