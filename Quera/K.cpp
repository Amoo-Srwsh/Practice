// in the name of Allah
// https://quera.org/problemset/10936/
#include <bits/stdc++.h>
using namespace std;
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
int ans=1, s=1;
int n, k;
int main() {
  ios::sync_with_stdio(false); cin.tie(0);
  // ... MY solution
  cin >> n >> k;
  vector<int>v(n+1);
  for (int i = 0; i < n; i++) cin >> v[i];
  for (int i = 1; i <= n; i++) {
       if (v[i]-v[i-1]==1) s++; 
       else ans=max(ans, s+min(n-s, k)), s=1;
  }
  cout << ans;
}	
// have a good day :)
