/* IN THE NAME OF ALLAH */



/* problem url */
// https://codeforces.com/problemset/problem/1300/A



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
    int n; 
    cin >> n;
    int w = 0, x = 0, y = 0;
    for (int i = 0; i < n; i++) {
         int inp; cin >> inp;
	 if (inp > 0) x += inp; 
	 if (inp < 0) w += abs(inp);
	 if (inp == 0) y++;
    }
    if (y > 0) x += y;
    if (w == x) cout << y + 1 << "\n";
    else cout << y << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tst; cin >> tst;
    while (tst--) {
	 solve();
    }

    return 0 ;
}
