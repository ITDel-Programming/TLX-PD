#include <bits/stdc++.h>
using namespace std;
int main()
{
    string kata;
    int k;
    cin >> kata >> k;
    for (int i = 0; i < kata.size(); i++)
    {
        int ascii = 0;
        if ((int)kata[i] + k > 122)
        {
            ascii = int(kata[i]) + k - 122 + 97 - 1;
        }
        else
        {
            ascii = ((int)kata[i] + k);
        }
        kata[i] = char(int(ascii));
    }
    cout << kata << endl;
    return 0;
}
