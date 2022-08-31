/* IN THE NAME OF ALLAH */



/* problem url */
// https://codeforces.com/problemset/problem/1690/D



#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

template <class T>
istream& operator>>(istream& is, vector<T>& v) {
    for (T& x : v)
         is >> x;
    return is;
}

template <class T>
ostream& operator<<(ostream& os, const vector<T>& v) {
    if (!v.empty()) {
        os << v.front();
        for (int i = 1; i < v.size(); ++i)
             os << ' ' << v[i];
    }
    return os;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tst; cin >> tst;
    while (tst--) {
	 int n, k, ans = INT_MAX; cin >> n >> k;
	 string S; cin >> S;
	 vector<int> A(n + 1);
	 for (int i = 1; i <= n; i++) {
              A[i] += A[i - 1] + (S[i - 1] == 'W');
	 }
	 for (int i = k; i <= n; i++) {
	      ans = min(ans, A[i] - A[i - k]);
	 }
         cout << ans << '\n';
    }
    return 0 ;
}
/* UFO (Pasdaran Section) */
