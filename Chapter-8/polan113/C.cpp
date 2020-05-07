#include <bits/stdc++.h>
using namespace std;

bool check(int b) {
	int cntDivisor = 0;
	for(int i = 2; i <= sqrt(b); i++)
		if(b % i == 0) cntDivisor++;
	return cntDivisor <= 1;
}


int main() {
	// chapter-8 | C. Bilangan Agak Prima
	// your code goes here
	int n, b;
	cin >> n;

	for(int i = 0; i < n; i++) {
		cin >> b;
		if(check(b)) cout << "YA";
		else cout << "BUKAN";
		cout << endl;
	}
	return 0;
}