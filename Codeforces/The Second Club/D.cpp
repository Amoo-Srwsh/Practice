/* IN THE NAME OF ALLAH */



/* problem url */
// https://codeforces.com/problemset/problem/1405/B



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
    int tst;
    cin >> tst;
    while (tst--) {
	 int n; cin >> n;
	 vector<ll> A(n);
	 ll sum = 0, x = 0;
	 for (int i = 0; i < n; i++) {
	      cin >> A[i];
	      sum += abs(A[i]);
	 }
	 for (int i = 0; i < n; i++) {
              if (A[i] >= 0) {
		  x += A[i];
		  continue ;
	      }
	      if (abs(A[i]) >= x) { 
	          sum -= x * 2;
                  x = 0;
	      }
              else {
		  sum -= abs(A[i]) * 2; 
		  x -= abs(A[i]);
	      }
	 }
	 cout << sum / 2 << "\n";
    }

    return 0 ;
}
/* UFO (Pasdaran Section) */
