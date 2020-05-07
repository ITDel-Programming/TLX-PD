#include <bits/stdc++.h>

using namespace std;

vector < pair < int,int > > data;


void Tminmax(int N, int D)
{
    int mx = -1, mn = INT_MAX;

    for(int i=0; i<N-1; i++)
    {
        for(int j=i+1; j<N; j++)
        {
            int tmp = pow(abs(data[i].first-data[j].first),D)+pow(abs(data[i].second-data[j].second),D);
            mn = (tmp<mn)?tmp:mn;
            mx = (tmp>mx)?tmp:mx;
        }
    }
    cout << mn << " " << mx << '\n';
}


int main ()
{
    long long int mx, mn;
    int N, D, x, y;
    cin >> N >> D;

    for(int i=0; i<N; i++)
    {
        cin >> x >> y;
        data.push_back({x,y});
    }

    Tminmax(N,D);

    return 0;
}