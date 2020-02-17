#include<bits/stdc++.h>
using namespace std;

int numberOfSetBitsBetweenTwoNumbers(int a, int b) {
	int setBits = 0;
	for (int i = a; i <= b; i++) {
		setBits += __builtin_popcount(i);
	}
	return setBits;
}

int main() {
	int Q;
	cin >> Q;
	for (int i = 0; i < Q; i++) {
		int a;
		int b;
		cin >> a >> b;
		int res = numberOfSetBitsBetweenTwoNumbers(a, b);
		cout << res << endl;
	}
	return 0;
}