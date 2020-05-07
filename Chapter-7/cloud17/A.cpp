#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int n;
    cin >> n;

    for(int i=0; i<n; i++)
    {
        if((i+1)%10 == 0)
        {
            continue;
        }
        else if ((i+1) == 42)
        {
            cout << "ERROR" << '\n';
            break;
        }
        else
        {
            cout << (i+1) << '\n';
        }
    }

    return 0;
}