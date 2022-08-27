/* IN THE NAME OF ALLAH */



/* problem url */
// https://codeforces.com/contest/1721/problem/B



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

void solve () {
    vector<int> A(5); cin >> A;
    if (((A[2] + A[4] < A[0]) && (A[3] - A[4] > 1)) || ((A[3] + A[4] < A[1]) && (A[2] - A[4] > 1)))
	cout << (A[0] + A[1]) - 2 << '\n';
    else cout << -1 << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tst; cin >> tst;
    while (tst--) {
	 vector<int> A(5); cin >> A;
	 if ((A[2] + A[4] < A[0]) && (A[3] - A[4] > 1)) {
             cout << (A[0] + A[1]) - 2 << '\n';
	     continue ;
	 }
	 if ((A[3] + A[4] < A[1]) && (A[2] - A[4] > 1)) {
	     cout << (A[0] + A[1]) - 2 << '\n';
	     continue ;
	 }
	 cout << -1 << '\n';
	 //solve();
    }

    return 0 ;
}
