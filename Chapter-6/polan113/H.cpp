#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n, k;
	cin >> n >> k;
	
	for(int i = 1; i <= n; i++) {
		if(i > 1) cout << " ";
		if(i % k == 0) cout << "*";
		else cout << i;
	}
	cout << endl;
	return 0;
}