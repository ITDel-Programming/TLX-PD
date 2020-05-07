#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int n, mn = 100000, mx = -100000, a;
    cin >> n;

    while(n--)
    {
        cin >> a;
        mn = min(a,mn);
        mx = max(a,mx);
    }

    cout << mx << " " << mn << '\n';

    return 0;
}