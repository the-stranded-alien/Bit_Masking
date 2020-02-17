#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	int no;
	int XOR = 0;
	int a[100005];
	for (int i = 0; i < n; i++) {
		cin >> no;
		a[i] = no;
		XOR = XOR ^ no;
	}

	// XOR = a ^ b
	int temp = XOR;
	int pos = 0;
	while ((temp & 1) != 1) {
		pos++;
		temp = temp >> 1;
	}
	// The first set bit in XOR is at position 'pos'.
	int mask = (1 << pos);

	// Find those numbers which contain set bit at position 'pos'
	int x = 0;
	int y = 0;
	for (int i = 0; i < n; i++) {
		if ((a[i]&mask) > 0) {
			x = x ^ a[i];
		}
	}
	y = XOR ^ x;

	cout << min(x, y) << " " << max(x, y) << endl;

	return 0;
}