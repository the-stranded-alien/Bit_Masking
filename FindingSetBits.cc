//Sahil Gupta
//sahil16gupta11@gmail.com
//@_the_stranded_alien_

// C++ Code

#include<bits/stdc++.h>
using namespace std;

// First Method
int countBits(int n) {
	int ans = 0;
	while (n > 0) {
		ans += (n & 1);
		n = n >> 1;
	}
	return ans;
}

// Second Method
int countBitsFast(int n) {
	int ans = 0;
	while (n > 0) {
		n = n & (n - 1);
		ans++;
	}
	return ans;
}

int main() {
	int n;
	cin >> n;
	cout << countBits(n) << endl;
	cout << countBitsFast(n) << endl;
	cout << __builtin_popcount(n) << endl;
	return 0;
}