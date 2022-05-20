// in the name of Allah
// https://codeforces.com/problemset/problem/1516/A
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
       int n, k;
       cin >> n >> k;
       vector<int>v(n);
       for (int i = 0; i < n; i++) cin >> v[i];
       for (int i = 0; i < n-1 && k; i++) {
	    int m = min(v[i], k);
	    v[n-1]+=m, v[i]-=m, k-=m;
       }
       for (int i = 0; i < n; i++) cout << v[i] << " ";
       cout << endl;
  }
  // second solution //
  /*
  int TC;
  cin >> TC;
  while (TC--) {
       int n, k;
       cin >> n >> k;
       vector<int>v(n);
       for (int i = 0; i < n; i++) cin >> v[i];
       for (int i = 0; i < n-1 && k; i++) {
	    if (k<=v[i]) v[n-1]+=k, v[i]-=k, k=0;
	    else if (v[i]) v[n-1]+=v[i], k-=v[i], v[i]=0;
       }
       for (int i = 0; i < n; i++) cout << v[i] << " ";
       cout << endl;
  }
  */
}

