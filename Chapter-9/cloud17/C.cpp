#include <bits/stdc++.h>

using namespace std;

int main ()
{
    unordered_map < int,int > ans;
    int n, an=0, mx=0;
    cin >> n;

    for(int i=0; i<n; i++)
    {
        int a;
        cin >> a;

        ans[a]++;
        if(mx < ans[a])
        {
            mx = ans[a];
            an = a;
        }
        if((mx == ans[a]) && (an < a))
        {
            an = a;
        }
    }

    cout << an << '\n';

    return 0;
}