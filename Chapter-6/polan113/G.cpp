#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n, b;
	
	cin >> b;
	int nMin = 100000, nMax = -100000;
	for(int i = 0; i < b; i++) {
		cin >> n;
		nMin = min(nMin, n);
		nMax = max(nMax, n);
	}
	
	cout << nMax << " " << nMin << endl;
	return 0;
}