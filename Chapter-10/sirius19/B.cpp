#include <bits/stdc++.h>
using namespace std;
void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
int baris1[1009];
int baris2[1009];
int main()
{
    int N, x, y, Q;
    char c1, c2;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> baris1[i];
    }
    for (int i = 0; i < N; i++)
    {
        cin >> baris2[i];
    }
    cin >> Q;
    for (int i = 0; i < Q; i++)
    {
        cin >> c1 >> x >> c2 >> y;
        if (c1 == 'A' && c2 == 'A')
        {
            swap(baris1[x - 1], baris1[y - 1]);
        }
        else if (c1 == 'B' && c2 == 'B')
        {
            swap(baris2[x - 1], baris2[y - 1]);
        }
        else if (c1 == 'A' && c2 == 'B')
        {
            swap(baris1[x - 1], baris2[y - 1]);
        }
        else
        {
            swap(baris2[x - 1], baris1[y - 1]);
        }
    }
    for (int i = 0; i < N; i++)
    {
        if (i)
            cout << ' ';
        cout << baris1[i];
    }
    cout << endl;
    for (int i = 0; i < N; i++)
    {
        if (i)
            cout << ' ';
        cout << baris2[i];
    }
    cout << endl;
}
