#include <bits/stdc++.h>
using namespace std;
int i;
bool cekPalindrom(string s, string s1, int n)
{
    if (s[n] != s1[n])
    {
        return false;
    }
    if (n == 0)
    {
        return true;
    }
    n--;
    return cekPalindrom(s, s1, n);
}
int main()
{
    string s, temps = "";
    cin >> s;
    temps = s;
    reverse(s.begin(), s.end());
    if (cekPalindrom(s, temps, s.length() - 1))
    {
        cout << "YA" << endl;
    }
    else
    {
        cout << "BUKAN" << endl;
    }
    return 0;
}
