#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int n, m, p, tmp;
    cin >> n >> m >> p;

    vector < vector < int > > a, b, c;

    for(int i=0; i<n; i++)
    {
        vector < int > aa;
        for(int k=0; k<m; k++)
        {
            cin >> tmp;
            aa.push_back(tmp);
        }
        a.push_back(aa);
    }

    for(int k=0; k<m; k++)
    {
        vector < int > bb;
        for(int j=0; j<p; j++)
        {
            cin >> tmp;
            bb.push_back(tmp);
        }
        b.push_back(bb);
    }
    for(int i=0; i<n; i++)
    {
        vector < int > cc;
        for(int j=0; j<p; j++)
        {
            tmp = 0;
            for(int k=0; k<m; k++)
            {
                tmp += (a[i][k] * b[k][j]);
            }
            cc.push_back(tmp);
        }
        c.push_back(cc);
    }


    for(int i=0; i<n; i++)
    {
        for(int j=0; j<p; j++)
        {
            cout << c[i][j];
            if(j<p-1) cout << " ";
        }
        cout << '\n';
    }

    return 0;
}