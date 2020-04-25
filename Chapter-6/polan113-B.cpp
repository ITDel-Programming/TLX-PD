#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	int b;
	int ans = 0;
	cin >> n;
	
	for(int i = 0; i < n; i++) {
		cin >> b;
		ans += b;
	}
	
	cout << ans << endl;
	return 0;
}