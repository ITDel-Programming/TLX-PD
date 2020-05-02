#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i = 0 ; i < n ; i++){
		int num; 
		cin >> num;
		if(num == 1)cout << "BUKAN" << endl;
		else{
			int res = 0;
			for(int j = 2; j < num-1; j++){
				if(num % j == 0)res++;
			}
			if(res == 0)cout << "YA" <<endl;
			else cout << "BUKAN" <<endl;
		}
	}
	return 0;
}
