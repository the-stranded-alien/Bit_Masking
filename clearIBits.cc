//Sahil Gupta
//sahil16gupta11@gmail.com
//@_the_stranded_alien_

// C++ Code

#include<bits/stdc++.h>
using namespace std;

int clearLastIBits(int n, int i) {
	int mask = (-1 << i);
	return (n & mask);
}

int main() {
	int n = 15;
	int i = 2; // from position i+1 to 0 
	cout << clearLastIBits(n, i) << endl;
	return 0;
}