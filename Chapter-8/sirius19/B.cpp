#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, number;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> number;
        int ctr = 0;
        for (int i = 2; i <= sqrt(number); i++)
        {
            if (number % i == 0)
            {
                ctr++;
            }
        }
        if (ctr || number == 1)
        {
            cout << "BUKAN" << endl;
        }
        else
        {
            cout << "YA" << endl;
        }
    }
    return 0;
}
