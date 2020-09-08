#include <bits/stdc++.h>
using namespace std;

int R, C, t[150][150], id[130];
vector<string> vector_code;

void quadtree(int x, int y, int q, string code)
{
    bool satu = false, nol = false;

    for (int a = x; a < x + q; a++)
        for (int b = y; b < y + q; b++)
            if (t[a][b] == 0)
                nol = true;
            else
                satu = true;
    if (satu && nol)
    {
        quadtree(x, y, q / 2, code + "0");
        quadtree(x, y + (q / 2), q / 2, code + "1");
        quadtree(x + (q / 2), y, q / 2, code + "2");
        quadtree(x + (q / 2), y + (q / 2), q / 2, code + "3");
    }
    else if (satu)
    {
        string s_code = "1" + code;
        vector_code.push_back(s_code);
    }
}

int main()
{

    cin >> R >> C;

    int tmp = 2;

    while (pow2 < max(R, C))
    {
        pow2 *= 2;
    }

    for (int a = 0; a < R; a++)
        for (int b = 0; b < C; b++)
            cin >> t[a][b];

    quadtree(0, 0, pow2, "");

    cout << vector_code.size() << endl;

    for (int i = 0; i < vector_code.size(); i++)
    {
        cout << vector_code[i] << endl;
    }
}
