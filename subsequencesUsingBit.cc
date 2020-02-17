#include<bits/stdc++.h>
using namespace std;

void filterChars(int n, char a[]) {
	int j = 0;
	while (n > 0) {
		int last_bit = (n & 1);
		if (last_bit == 1) {
			cout << a[j];
		}
		j++;
		n = n >> 1;
	}
	cout << endl;
	return;
}

void printSubsets(char a[]) {
	int n = strlen(a);
	for (int i = 0; i < (1 << n); i++) { 			// for n = 3 this loop goes till 7
		filterChars(i, a);
	}
	return;
}

int main() {
	char a[100];
	cin >> a;
	printSubsets(a);
	return 0;
}