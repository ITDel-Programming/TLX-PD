#include <bits/stdc++.h>
using namespace std;
void m(int k)
{
    if (k == 1)
    {
        cout << "*" << endl;
    }
    else
    {
        m(k - 1);

        for (int i = 0; i < k; i++)
            cout << '*';
        cout << endl;

        m(k - 1);
    }
}
int main()
{
    int n;
    cin >> n;
    m(n);
    return 0;
}
