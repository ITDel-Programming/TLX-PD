#include <bits/stdc++.h>
using namespace std;
int matriks[109][109];
int main()
{
    int N, M;
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> matriks[i][j];
        }
    }
    for (int i = 0; i < M; i++)
    {
        for (int j = N - 1; j >= 0; j--)
        {
            if (j != N - 1)
                cout << ' ';
            cout << matriks[j][i];
        }
        cout << endl;
    }
    return 0;
}
