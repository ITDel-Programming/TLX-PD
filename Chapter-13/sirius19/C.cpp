#include <bits/stdc++.h>
using namespace std;

vector<string> v;

bool satisfied(string s)
{
    int n = 0;
    while (n + 2 < s.size())
    {
        if (!((s[n + 1] < s[n] && s[n + 1] < s[n + 2]) || (s[n + 1] > s[n] && s[n + 1] > s[n + 2])))
            return false;
        n++;
    }
    return true;
}

int main()
{
    int n;
    string str;
    cin >> n;
    for (char s = '1'; s < (char)(n + 49); s++)
        str += s;
    do
    {
        if (satisfied(str))
            cout << str << endl;
    } while (next_permutation(str.begin(), str.end()));
}