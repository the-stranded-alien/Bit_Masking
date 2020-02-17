#include<bits/stdc++.h>
using namespace std;

// Number of numbers between 1 & n which are divisible by any of the prime numbers less than 20.

#define ll long long

int main() {
	ll t;
	cin >> t;
	ll prime[] = {2, 3, 5, 7, 11, 13, 17, 19};

	while (t--) {
		ll n;
		cin >> n;

		ll subset = (1 << 8) - 1; // As their are 8 primes that are less than 20.
		ll ans = 0;

		for (ll i = 1; i <= subset; i++) {
			ll denom = 1ll;
			ll setBits = __builtin_popcount(i);
			for (ll j = 0; j <= 7; j++) {
				if (i & (1 << j)) {
					denom = denom * prime[j];
				}
			}
			if (setBits & 1) {
				ans += n / denom;
			}
			else {
				ans -= n / denom;
			}
		}
		cout << ans << endl;
	}
	return 0;
}