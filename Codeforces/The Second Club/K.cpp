/* IN THE NAME OF ALLAH */



/* problem url */
// https://codeforces.com/problemset/problem/1607/C



#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
       
    int tst; cin >> tst;
    while (tst--) {
	 ll n; cin >> n;
	 vector<ll> A(n); 
	 for (ll i = 0; i < n; i++) {
              cin >> A[i];
	 }
	 sort(A.begin(), A.end()); 
	 ll dump = 0, maxn = INT_MIN;
	 for (ll i = 0; i < n; i++) {
	      maxn = max(maxn, A[i] - dump);
              dump += A[i] - dump;
	 }
	 cout << maxn << '\n';
    }

    return 0 ;
}
