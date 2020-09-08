#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ctr = 0, n, angka;
    cin >> n;
    while (n--)
    {
        cin >> angka;
        ctr = 0;
        for (int i = 2; i <= sqrt(angka); i++)
        {
            if (angka % i == 0)
            {
                ctr++;
            }
        }
        if (ctr > 1)
        {
            cout << "BUKAN" << endl;
        }
        else
        {
            cout << "YA" << endl;
        }
    }
    return 0;
}
