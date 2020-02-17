//Sahil Gupta
//sahil16gupta11@gmail.com
//@_the_stranded_alien_

// C++ Code

#include<bits/stdc++.h>
using namespace std;

// Given a list of numbers where every number occur twice except one, find that unique number.

int main() {
	int n;
	cin >> n;

	int no;
	int ans = 0;

	for (int i = 0; i < n; i++) {
		cin >> no;
		ans = ans ^ no;
	}

	cout << ans << endl;
	return 0;
}