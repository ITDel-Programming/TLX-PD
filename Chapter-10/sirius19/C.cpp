#include <bits/stdc++.h>
using namespace std;
int reverse(int x)
{
    int temp = x;
    int ret = 0;

    while (temp > 0)
    {
        ret = (ret * 10) + (temp % 10);
        temp = temp / 10;
    }

    return ret;
}
int main()
{
    int a, b, ans = 0;
    cin >> a >> b;
    ans = reverse(a) + reverse(b);
    cout << reverse(ans) << endl;

    return 0;
}
