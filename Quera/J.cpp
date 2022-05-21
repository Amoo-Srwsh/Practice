// in the name of Allah
// https://quera.org/problemset/144080/
#include <bits/stdc++.h>
using namespace std;
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
int n, k, s;
int main() {
  ios::sync_with_stdio(false); cin.tie(0);
  cin >> n >> k;
  map<int, int>cnt;
  for (int i = 0; i < n; i++) {
       int a; cin >> a; 
       cnt[a]++;
  }
  vector<int>v;
  for (auto i : cnt) v.push_back(i.second);
  sort (v.begin(), v.end(), greater<int>());
  for (int i = 1; i < v.size(); i++) s+=v[i];
  cout << ((v[0]<=s)?"YES":"NO");
}

