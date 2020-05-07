#include <bits/stdc++.h>

using namespace std;

int balik(int x)
{
    int tmp = x;
    int ret = 0;

    while(tmp > 0)
    {
        ret = (ret * 10) + (tmp % 10);
        tmp /= 10;
    }
    return ret;
}

int main ()
{
    int a, b;
    cin >> a >> b;

    cout << balik(balik(a)+balik(b)) << '\n';

    return 0;
}