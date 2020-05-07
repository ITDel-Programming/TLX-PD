#include <bits/stdc++.h>

using namespace std;

int A, B;

int f(int x)
{
    return abs((A*x)+B);
}

int main ()
{
    int x, k;
    cin >> A >> B >> k >> x;

    while(k--)
    {
        x = f(x);
    }

    cout << x << '\n';

    return 0;
}