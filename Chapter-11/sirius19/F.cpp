#include <bits/stdc++.h>
using namespace std;
int main()
{
    string kata;
    cin >> kata;
    for (int i = 0; i < kata.size(); i++)
    {
        if (i > 0)
        {
            if (kata[i] >= 'A' && kata[i] <= 'Z')
            {
                cout << '_';
                kata[i] += 'a' - 'A';
            }
            if (kata[i] == '_')
            {
                kata[i + 1] += 'A' - 'a';
                cout << kata[i + 1];
                i++;
                continue;
            }
        }
        cout << kata[i];
    }
    cout << endl;
    return 0;
}
