// in the name of Allah
// https://codeforces.com/contest/1616/problem/A
#include<bits/stdc++.h>
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
	int n, x, T = 1e3, ans = 0; cin >> n;
	vector<int> A(n+1);
	for (int i = 0; i < n; i++) cin >> x, A[i] = abs(x);
	sort(A.begin(), A.end(), greater<int>());
	for (int i = 0; i < n; i++) {
	     if (T != A[i]) {
	         if (A[i] == A[i + 1] && A[i]) ans += 2;
		 else ans += 1; 
	     }
	     T = A[i];
	}
	cout << ans << endl;
   }
	
   /* second solution
   int TC; cin >> TC;
   while (TC--) {
        int n, ans = 0; cin >> n;
	map <int, int> cnt;
	for (int i = 0; i < n; i++) {
	     int a; cin >> a, a = abs(a);
	     int lim = ((a == 0)?2:1);
	     if (cnt[a] == 2) continue;
	     cnt[a] += lim;
	     ans += 1;
	}
    } 
    */ 
}
