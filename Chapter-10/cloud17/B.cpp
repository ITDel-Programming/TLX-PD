#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int n, t, tmp;
    cin >> n;

    vector < int > a, b;
    for(int i=0; i<n; i++)
    {
        cin >> tmp;
        a.push_back(tmp);
    }
    for(int i=0; i<n; i++)
    {
        cin >> tmp;
        b.push_back(tmp);
    }

    cin >> t;
    char P,Q;
    int x,y;
    for(int i=0; i<t; i++)
    {
        cin >> P >> x >> Q >> y;
        if(P == 'A')
        {
            if(Q == 'A')
            {
                tmp = a[x-1];
                a[x-1] = a[y-1];
                a[y-1] = tmp;
            }
            else
            {
                tmp = a[x-1];
                a[x-1] = b[y-1];
                b[y-1] = tmp;
            }
        }
        else
        {
            if(Q == 'A')
            {
                tmp = b[x-1];
                b[x-1] = a[y-1];
                a[y-1] = tmp;
            }
            else
            {
                tmp = b[x-1];
                b[x-1] = b[y-1];
                b[y-1] = tmp;
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        cout << a[i];
        if(i<n-1)
        {
            cout << " ";
        }
    }
    cout << '\n';

    for(int i=0; i<n; i++)
    {
        cout << b[i];
        if(i<n-1)
        {
            cout << " ";
        }
    }
    cout << '\n';

    return 0;
}