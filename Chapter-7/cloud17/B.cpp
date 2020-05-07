#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int n, flag;
    cin >> n;

    flag = n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(j<flag-1)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        flag--;
        cout << '\n';
    }

    return 0;
}