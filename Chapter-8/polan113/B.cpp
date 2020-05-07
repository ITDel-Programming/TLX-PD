#include <bits/stdc++.h>
using namespace std;
bool cekPrima(int b) {
	if(b == 1) return false;
	for(int i = 2; i <= sqrt(b); i++)
		if(b % i == 0) return false;
	return true;
}


int main() {
	// your code goes here
	int n, b;
	cin >> n;
	
	for(int i = 0; i < n; i++) {
		cin >> b;
		if(cekPrima(b)) cout << "YA";
		else cout << "BUKAN";
		cout << endl;
	}
	return 0;
}