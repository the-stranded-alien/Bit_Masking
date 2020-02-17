//Sahil Gupta
//sahil16gupta11@gmail.com
//@_the_stranded_alien_

// C++ Code

#include<bits/stdc++.h>
using namespace std;

int clearRangeItoJ(int n, int i, int j) {
	int ones = (~0);
	int a = ones << (j + 1);
	int b = (1 << i) - 1;
	int mask = a | b;
	int ans = n & mask;
	return ans;
}

int main() {
	int n = 31;
	int i = 1;
	int j = 3;
	cout << clearRangeItoJ(n, i, j) << endl;
	return 0;
}