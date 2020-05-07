#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int n,y, total=0;
    cin >> n;
    while(n--)
    {
        cin >> y;
        total += y;
    }

    cout << total << '\n';

    return 0;
}