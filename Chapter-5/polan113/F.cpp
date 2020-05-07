#include <bits/stdc++.h>
using namespace std;

pair<int, int> calc(float a, float b) {
	if(a < 0.0) {
		if(a == b) return {b,b};
		else return {b - 1, b};
	} else {
		if(a == b) return {b,b};
		else return {b, b + 1};
	}
}

int main() {
	// your code goes here
	float n;
	
	cin >> n;
	int temp = n;
	
	pair<int, int> ans = calc(n, temp);
	
	cout << ans.first << " " << ans.second << endl;
	return 0;
}