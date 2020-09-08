#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S, T;
    cin >> S >> T;
    for (int i = 0; i < S.size(); i++)
    {
        for (int j = 0; j < S.size(); j++)
        {
            if (S.substr(j, T.length()) == T)
            {
                S.erase(j, T.length());
            }
        }
    }
    cout << S << endl;
    return 0;
}
