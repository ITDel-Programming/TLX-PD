#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int n, flag;
    cin >> n;

    flag = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            if(flag > 9) flag =0;

            cout << flag;
            flag++;
        }
        cout << '\n';
    }

    return 0;
}