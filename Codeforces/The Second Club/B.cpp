/* IN THE NAME OF ALLAH */



/* problem url */
// https://codeforces.com/contest/1704/problem/B



#ifdef DEBUG
#define _GLIBCXX_DEBUG
#endif
//#pragma GCC optimize("O3")
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;

inline int absolute_zero (int a, int b) { return (a - b <= 0) ? 0 : a - b; }

int main(int argc, char *argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#ifdef DEBUG
    freopen("input.txt", "r", stdin);
#endif
    int tst;
    cin >> tst;
    while (tst--) {
	 int n, x; cin >> n >> x;
	 vector<int> A(n);
	 for (int i = 0; i < n; i++) {
              cin >> A[i];
	 }
	 int mxn = -1, mnn = -1, ans = -1;
	 for (int i = 0; i < n; i++) {
              int xt = absolute_zero(A[i], x);
	      int yt = A[i] + x;
	      if (xt > mxn || yt < mnn) {
		  ans++;
		  mnn = xt;
		  mxn = yt;
	      }
	      else {
		  mxn = min(mxn, yt);
		  mnn = max(mnn, xt);
	      }
	 }
	 cout << ans << "\n";
    }

    return 0;
}
