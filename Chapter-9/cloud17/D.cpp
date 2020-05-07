#include <bits/stdc++.h>

using namespace std;

int main ()
{
    vector < vector < int > > ans;
    int a, b;
    cin >> a >> b;

    int arr[a][b];

    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            cin >> arr[i][j];
        }
    }

    for(int i=0; i<b; i++)
    {
        vector < int > tmp;
        for(int j=a-1; j>=0; j--)
        {
            tmp.push_back(arr[j][i]);
        }
        ans.push_back(tmp);
    }

    for(int i=0; i<b; i++)
    {
        for(int j=0; j<a; j++)
        {
            cout << ans[i][j];
            if(j < a-1)
            {
                cout << " ";
            }
        }
        cout << '\n';
    }

    return 0;
}