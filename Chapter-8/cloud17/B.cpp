#include <bits/stdc++.h>

using namespace std;

unordered_map < int,int > prime;
void start()
{
    prime[0] = 1;
    prime[1] = 1;
    for(int i=2; i<=1000000; i++)
    {
        if(prime[i] == 0)
        {
            for(int j=i+i; j<=1000000; j+=i)
            {
                prime[j] = 1;
            }
        }
    }
}


int main ()
{
    start();
    int n, tmp;
    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> tmp;
        if(prime[tmp] == 0)
        {
            cout << "YA" << endl;
        }
        else
        {
            cout << "BUKAN" << endl;
        }
    }

    return 0;
}