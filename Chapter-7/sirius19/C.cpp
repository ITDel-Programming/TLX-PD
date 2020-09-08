#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ctr = 0, n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j <= n)
            {
                cout << ctr;
                if (ctr == 9)
                {
                    ctr = -1;
                }
            }
            ctr++;
        }
        cout << endl;
    }

    return 0;
}
