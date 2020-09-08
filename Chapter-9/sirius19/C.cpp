#include <bits/stdc++.h>
using namespace std;
int cek[100009];
int main()
{
    int n, ans = 0, limit = 0, angka, maxi = INT_MIN;
    cin >> n;
    while (n--)
    {
        cin >> angka;
        cek[angka]++;
        limit = max(limit, angka);
    }
    for (int i = 1; i <= limit; i++)
    {
        if (cek[i] >= maxi)
        {
            maxi = cek[i];
            ans = i;
        }
    }
    cout << ans << endl;
    return 0;
}
