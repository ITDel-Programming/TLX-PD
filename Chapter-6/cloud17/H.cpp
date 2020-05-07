#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int n, k;
    cin >> n >> k;

    for(int i=0; i<n; i++)
    {
        if((i+1)%k != 0)
        {
            cout << i+1;
        }
        else
        {
            cout << "*";
        }

        if(i<n-1)
        {
            cout << " ";
        }
    }

    cout << '\n';

    return 0;
}