/* IN THE NAME OF ALLAH */



/* problem url */
// https://quera.org/problemset/6582/



#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, x; cin >> n;
    map<ll, ll> cnt;
    for (int i = 0; i < n; i++) {
	 cin >> x;
	 cnt[x] = i + 1;
    }
    ll res = 0, maxn = 0;
    for (auto i : cnt) {
	 ll x = i.second, y = i.first;
	 if (x > maxn) {
             res += (x - maxn) * y;
	     maxn = x;
	 }
    }
    cout << res;

    return 0 ;
}
