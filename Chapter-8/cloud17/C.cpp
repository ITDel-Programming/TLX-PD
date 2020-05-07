#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int n, tmp;
    cin >> n;

    while(n--)
    {
        cin >> tmp;
        int j=2, x=0;
        while(j<tmp)
        {
            if(tmp%j == 0)
            {
                x++;
            }
            if(x > 2) break;
            j++;
        }
        if(x <= 2)
        {
            cout << "YA" << '\n';
        }
        else
        {
            cout << "BUKAN" << '\n';
        }
    }

    return 0;
}