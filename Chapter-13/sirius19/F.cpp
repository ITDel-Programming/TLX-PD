#include <bits/stdc++.h>
using namespace std;

int t[150][150], ctr, n, R, C;
vector<string> vector_code;

void homogen(int a, int b, int n)
{
    for (int i = a; i < n + a; i++)
    {
        for (int j = b; j < n + b; j++)
        {
            t[i][j] = 1;
        }
    }

    ctr++;
}

bool check(string kode)
{
    for (int i = 0; i < vector_code.size(); i++)
    {
        if (kode.compare(vector_code[i]) == 0)
        {
            return true;
        }
    }

    return false;
}

void quadtree(int x, int y, int n, string kode)
{
    if (ctr < vector_code.size() && n > 0)
    {
        if (check(kode))
        {
            homogen(x, y, n);
        }
        else
        {
            quadtree(x, y, n / 2, kode + "0");
            quadtree(x, y + (n / 2), n / 2, kode + "1");
            quadtree(x + (n / 2), y, n / 2, kode + "2");
            quadtree(x + (n / 2), y + (n / 2), n / 2, kode + "3");
        }
    }
}

int main()
{

    cin >> n;

    while (n--)
    {
        string input;
        cin >> input;
        vector_code.push_back(input);
    }

    cin >> R >> C;

    int pow = 1;
    while (pow < max(R, C))
    {
        pow *= 2;
    }

    quadtree(0, 0, pow, "1");

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if (j)
                cout << ' ';
            cout << t[i][j];
        }
        cout << endl;
    }
}