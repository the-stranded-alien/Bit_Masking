#include<bits/stdc++.h>
using namespace std;

void clearBit(int &n, int i) {
	int mask = ~(1 << i);
	n = n & mask;
}

void updateBit(int &n, int i, int v) {
	int mask = ~(1 << i);
	int cleared_n = n & mask;
	n = cleared_n | (v << i);
}

int main() {
	int n = 5;
	// int i;
	// cin >> i;
	// clearBit(n, i);
	updateBit(n, 2, 0);
	updateBit(n, 3, 1);
	cout << n << endl;
	return 0;
}