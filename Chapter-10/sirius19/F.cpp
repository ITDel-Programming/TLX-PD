#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> data;

int main()
{
    int n, d, x, y, maxi = INT_MIN, mini = INT_MAX;
    cin >> n >> d;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        data.push_back(make_pair(x, y));
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int x1 = abs(data[i].first - data[j].first);
            int y1 = abs(data[i].second - data[j].second);
            int temp = pow(x1, d) + pow(y1, d);
            mini = min(temp, mini);
            maxi = max(temp, maxi);
        }
    }
    cout << mini << " " << maxi << endl;
    return 0;
}
