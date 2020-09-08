#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string biner = "";
    while (n)
    {
        if (n % 2 == 0)
        {
            biner += '0';
            n /= 2;
        }
        else
        {
            biner += '1';
            n /= 2;
        }
    }
    reverse(biner.begin(), biner.end());
    cout << biner << endl;
    return 0;
}
