#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int data[3][3];
	for( int i = 0; i < 3; i++ )
		for( int j = 0; j < 3; j++ )
			cin >> data[i][j];
	for( int i = 0; i < 3; i++) {
		for( int j = 0; j < 3; j++) {
			if(j) cout << " ";
			cout << data[j][i];
		}
		cout << endl;
	}
	return 0;
}