#include <bits/stdc++.h>

using namespace std;

int main ()
{
    vector < int > data;
    int n;

    while(cin >> n)
    {
        data.push_back(n);
    }

    for(int i=data.size()-1; i>=0; i--)
    {
        cout << data[i] << '\n';
    }

    return 0;
}