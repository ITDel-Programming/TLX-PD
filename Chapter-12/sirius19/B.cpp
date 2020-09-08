#include <bits/stdc++.h>
using namespace std;
int faktorial(int n)
{
    if (n == 1)
    {
        return 1;
    }

    if (n % 2 == 0)
    {
        return faktorial(n - 1) * n / 2;
    }
    return faktorial(n - 1) * n;
}
int main()
{
    int n;
    cin >> n;
    long long ans = faktorial(n);
    cout << ans << endl;
    return 0;
}
