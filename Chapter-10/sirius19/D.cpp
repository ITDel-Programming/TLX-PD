#include <bits/stdc++.h>
using namespace std;
bitset<1000009> data;
vector<int> prime;
void generate_prime()
{
    for (int i = 2; i < 1000009; i++)
    {
        if (data[i])
        {

            prime.push_back(i);
            for (int j = i; j < 1000009; j += i)
            {
                data[j] = 0;
            }
        }
    }
}
int main()
{
    data.set();
    data[1] = 0;
    generate_prime();
    int n, ctr = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {

        if (ctr)
        {
            cout << " x ";
        }
        ctr = 0;
        while (n % prime[i] == 0)
        {

            ctr++;
            n /= prime[i];
        }
        if (ctr > 1)
        {
            cout << prime[i] << '^' << ctr;
        }
        else if (ctr == 1)
        {
            cout << prime[i];
        }
    }
    cout << endl;
    return 0;
}
