//Sahil Gupta
//sahil16gupta11@gmail.com
//@_the_stranded_alien_

// C++ Code

#include<bits/stdc++.h>
using namespace std;

int decimalToBinary(int n) {
	int ans = 0;
	int p = 1;
	while (n > 0) {
		int last_bit = (n & 1);
		ans += p * last_bit;
		p = p * 10;
		n = n >> 1;
	}
	return ans;
}

int main() {
	int n;
	cin >> n;
	cout << decimalToBinary(n) << endl;
	return 0;
}