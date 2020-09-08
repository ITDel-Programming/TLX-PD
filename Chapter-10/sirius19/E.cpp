#include <bits/stdc++.h>
using namespace std;
int fx(int A, int B, int x)
{
    return abs(A * x + B);
}
int main()
{
    int A, B, K, x, sum = 0;
    cin >> A >> B >> K >> x;
    while (K--)
    {
        x = fx(A, B, x);
    }
    cout << x << endl;
    return 0;
}
