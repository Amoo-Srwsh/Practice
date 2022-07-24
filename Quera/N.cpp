// in the name of Allah
// https://quera.org/problemset/148640/
#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  string s;
  int n, m; cin >> n >> s >> m;
  vector<string> S(n*m); 
  vector<int> count(n*m);
  for (int i = 0; i < n*m; i++) {
       cin >> S[i];
       for (int j = 0; j < 4; j++)
	    if (S[i][j] == '#')
		count[i]++;
  }
  for (int i = 0; i < n*m; i += n) {
       int t = 0, f = 0;
       for (int j = i, c = 0; s[c] != '\0'; j++, c++) {
	    for (int k = 0; k < 4; k++) {
		 if (count[j] > 1) { f++; break; }
		 if (S[j][k] == '#') {
	             if (k == (int)s[c] - 65) { t++; }
		     else { f++; }
		 }
	    }
       }
       cout << 3 * t - f << endl;
  }
  //ans += accumulate(a.begin(), a.end() - 1, 0LL);
}
