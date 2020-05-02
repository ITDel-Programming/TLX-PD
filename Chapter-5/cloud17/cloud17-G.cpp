#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int xx, xy, yx, yy;

    cin >> xx >> xy >> yx >> yy;

    cout << abs(xx-yx)+abs(xy-yy) << '\n';

    return 0;
}