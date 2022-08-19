/* IN THE NAME OF ALLAH */



/* problem url */
// https://codeforces.com/contest/1704/problem/A



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
	 int a, b; cin >> a >> b;
	 string x, y; cin >> x >> y;
	 int zf = 0, of = 0, ok = 2;
	 for (int i = 0; i < a - b; i++) {
	      if (x[i] == '1') of = 1;
	      else zf = 1;
	 }
         for (int i = a - b, j = 0; i < a; i++, j++) {
              if (x[i] != y[j]) {
                  if (y[j] == '0') zf--;
		  if (y[j] == '1') of--;
		  ok--;
	      }
	      ok = min(ok, 1);
	 }
	 if (zf >= 0 && of >= 0 && ok) cout << "YES\n";
	 else cout << "NO\n";
    }

    return 0;
}
