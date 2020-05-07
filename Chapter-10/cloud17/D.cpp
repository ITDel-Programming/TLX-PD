#include <bits/stdc++.h>

using namespace std;

unordered_map < int,int > dPrime;
map < int,int > ans;
vector < int > primeX;

int MAX_DATA = 1000001;

void primeNumber()
{
    dPrime[0] = 1;
    dPrime[1] = 1;

    for(int i=2; i<MAX_DATA; i++)
    {
        if(dPrime[i] == 0)
        {
            primeX.push_back(i);
            for(int j = i+i; j<MAX_DATA; j+=i)
            {
                dPrime[j] = 1;
            }
        }
    }
}

void primeF(int x)
{
    int qw = 0, pf = primeX[0];

    while (pf * pf <= x)
    {
        while (x % pf == 0)
        {
            x /= pf;
            ans[pf]++;
        }
        pf = primeX[qw++];
    }
    if (x != 1)
    {
        ans[x]++;
    }
}

int main ()
{
    primeNumber();

    int n;
    cin >> n;

    primeF(n);

    for (map<int, int>::iterator i = ans.begin(); i != ans.end(); i++) {
        if (i == ans.begin())
        {
            if (i->second != 1)
            {
                cout << i->first << "^" << i->second;
            }
            else
            {
                cout << i->first;
            }
        } else {
            if (i->second != 1)
            {
                cout << " x " << i->first << "^" << i->second;
            }
            else
            {
                cout << " x " << i->first;
            }
        }
    }

    cout << '\n';

    return 0;
}