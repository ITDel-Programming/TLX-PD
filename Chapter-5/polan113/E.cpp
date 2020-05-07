#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	
	if(n < 10) cout << "satuan";
	else if(n < 100) cout << "puluhan";
	else if(n < 1000) cout << "ratusan";
	else if(n < 10000) cout << "ribuan";
	else cout << "puluhribuan";
	cout << endl;
	return 0;
}