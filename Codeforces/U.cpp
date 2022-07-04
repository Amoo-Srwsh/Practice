// in the name of Allah
// https://codeforces.com/contest/1698/problem/B
#include<bits/stdc++.h>
using namespace std;
#define sync ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0);
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC optimize("O0")
#pragma GCC optimize("O1") 
#define ll long long
int main() {
    sync;
    int TC; cin >> TC;
    while (TC--) {
	  int n, k, ans = 0; cin >> n >> k;
	  vector<int> A(n);
	  for (int i = 0; i < n; i++) cin >> A[i];
	  if (k == 1) { 
             cout << (n - 1) / 2 << endl;
	     continue;
	  }
	  for (int i = 1; i < n - 1; i++)
	       if (A[i] > A[i + 1] + A[i - 1]) ans++; 
	  cout << ans << endl;
    }
}
