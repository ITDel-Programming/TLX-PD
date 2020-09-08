#include <bits/stdc++.h>
using namespace std;
int A[109][109];
int B[109][109];
int AB[109][109];
int main()
{
    int N, M, P;
    cin >> N >> M >> P;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> A[i][j];
        }
    }
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < P; j++)
        {
            cin >> B[i][j];
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < P; j++)
        {
            int sum = 0;
            for (int k = 0; k < M; k++)
            {
                sum += A[i][k] * B[k][j];
            }
            AB[i][j] = sum;
            if (j)
                cout << ' ';
            cout << sum;
        }
        cout << endl;
    }
    return 0;
}
