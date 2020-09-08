#include <bits/stdc++.h>
using namespace std;
int fx(int A, int B, int k, int x)
{
    if (k == 1)
    {
        return abs(A * x + B);
    }
    k--;
    return fx(A, B, k, abs(A * x + B));
}
int main()
{

    int A, B, k, x;
    cin >> A >> B >> k >> x;
    cout << fx(A, B, k, x) << endl;
    return 0;
}
