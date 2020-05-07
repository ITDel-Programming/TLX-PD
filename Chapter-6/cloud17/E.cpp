#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int n, i=0;
    cin >> n;

    while(pow(2,i) < n)
    {
        i++;
    }
    if(pow(2,i)==n)cout << "ya" << '\n';
    else cout << "bukan" << '\n';

    return 0;
}