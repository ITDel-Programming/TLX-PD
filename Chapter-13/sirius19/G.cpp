#include <bits/stdc++.h>
using namespace std;

int M, N, B, K, ans = 0, t[29][29];

void result(int x, int y, int z)
{
    if (x < M && x > -1 && y < N && y > -1 && t[x][y] == z)
    {
        t[x][y] = -1;
        ans++;
        result(x - 1, y, z);
        result(x + 1, y, z);
        result(x, y - 1, z);
        result(x, y + 1, z);
    }
}

int main()
{
    cin >> M >> N;
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> t[i][j];
        }
    }
    cin >> B >> K;

    result(B, K, t[B][K]);
    cout << ans * (ans - 1) << endl;
}