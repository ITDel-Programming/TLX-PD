#include <bits/stdc++.h>
using namespace std;
int main()
{
    string kata;
    cin >> kata;
    for (int i = 0; i < kata.size(); i++)
    {
        if (kata[i] >= 'A' && kata[i] <= 'Z')
        {
            kata[i] += 'a' - 'A';
        }
        else
        {
            kata[i] += 'A' - 'a';
        }
    }
    cout << kata << endl;
    return 0;
}
