#include <bits/stdc++.h>
using namespace std;
vector<int> data;
int main()
{
    int n;
    while (cin >> n)
    {
        data.push_back((n));
    }
    for (int i = data.size() - 1; i >= 0; i--)
    {
        cout << data[i] << endl;
    }

    return 0;
}
