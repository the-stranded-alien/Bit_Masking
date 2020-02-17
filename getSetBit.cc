//Sahil Gupta
//sahil16gupta11@gmail.com
//@_the_stranded_alien_

// C++ Code

#include<bits/stdc++.h>
using namespace std;

int getBit(int n, int i) {
	int mask = (1 << i);
	int bit = (n & mask) > 0 ? 1 : 0;
	return bit;
}

int setBit(int n, int i) {
	int mask = (1 << i);
	int ans = n | mask;
	return ans;
}

int main() {
	int n = 5;
	int i;
	cin >> i;
	// cout << getBit(n, i) << endl;
	// cout << setBit(n, i) << endl;
	return 0;
}