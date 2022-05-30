// in the name of Allah
// https://codeforces.com/problemset/problem/1466/B
#include <bits/stdc++.h>
using namespace std;

#define sync ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0);
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC optimize("O0")
#pragma GCC optimize("O1")

int main() {
  sync;
  int TC; cin >> TC;
  while (TC--) {
       int n, ans=0; cin >> n;
       vector<bool>cnt(n*2+5, 0);
       int A[n];
       for (int i = 0; i < n; i++) cin >> A[i];
       for (int i = n-1; i >= 0; i--) {
	    if (cnt[A[i]+1]==0) {
		cnt[A[i]+1]=1;
		ans++;
	    }
	    else if (cnt[A[i]]==0) {
		cnt[A[i]]=1;
		ans++;
	    }
       }
       cout << ans << endl;
  }
}
