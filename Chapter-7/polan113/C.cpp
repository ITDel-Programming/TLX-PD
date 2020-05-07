#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	int cnt = 0;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j <= i; j++) {
			cout << cnt;
			cnt++;
			if(cnt > 9) cnt = 0;
		}
		cout << endl;
	}
	return 0;
}