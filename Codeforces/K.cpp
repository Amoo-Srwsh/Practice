// in the name of Allah
// https://codeforces.com/problemset/problem/1623/A
#include <bits/stdc++.h>
using namespace std;
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
int main() {
  ios::sync_with_stdio(false); cin.tie(0);
  int TC;
  cin >> TC;
  while (TC--) {
       int n, m, rr, rc, sr, sc;
       cin >> n >> m >> rr >> rc >> sr >> sc;
       if (rr==sr||rc==sc) cout << "0" << endl;
       if (rr>sr&&rc<sc) cout << min(sc-rc, (n-rr)+(n-sr)) << endl;
       if (rr<sr&&rc<sc) cout << min(sr-rr, sc-rc) << endl;
       if (rr<sr&&rc>sc) cout << min(sr-rr, (m-rc)+(m-sc)) << endl;
       if (rr>sr&&rc>sc) cout << min((m-rc)+(m-sc), (n-rr)+(n-sr)) << endl;
  }
}	
