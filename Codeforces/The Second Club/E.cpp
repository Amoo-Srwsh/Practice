/* IN THE NAME OF ALLAH */



/* problem url */
// https://codeforces.com/problemset/problem/1691/B



#ifdef DEBUG
#define _GLIBCXX_DEBUG
#endif
//#pragma GCC optimize("O3")
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;

int main(int argc, char *argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#ifdef DEBUG
    freopen("input.txt", "r", stdin);
#endif
    int tst; cin >> tst;
    while (tst--) {
	 int n; cin >> n;
	 vector<int> A(n + 1), P;
	 for (int i = 0; i < n; i++) cin >> A[i];
	 int x = 1, y = 1, F = 1;
	 for (int i = 0; i < n; i++) {
              if (A[i] == A[i + 1]) {
		  y++;
		  continue ;
	      }
              if (y - x == 0) {
	          F = 0; 
		  break ;
	      }
	      for (int j = y; j >= x; j--) { 
		   P.push_back(j); 
	      }
	      if ((y - x) % 2 == 0) {
		  swap(P[x + ((y - x) / 2) - 1], P[x - 1]);
	      }
	      x = ++y;
	 } 
	 if (F) {
             for (int i : P) cout << i << " ";
	     cout << "\n";
	 }
	 else {
             cout << "-1\n";
	 }
    }

    return 0 ;
}
