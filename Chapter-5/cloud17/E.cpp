#include <bits/stdc++.h>

using namespace std;

int main ()
{
    string s;
    cin >> s;

    if(s.size()==1)
    {
        cout << "satuan" << '\n';
    }
    else if(s.size()==2)
    {
        cout << "puluhan" << '\n';
    }
    else if(s.size() == 3)
    {
        cout << "ratusan" << '\n';
    }
    else if(s.size() == 4)
    {
        cout << "ribuan" << '\n';
    }
    else
    {
        cout << "puluhribuan" << '\n';
    }

    return 0;
}