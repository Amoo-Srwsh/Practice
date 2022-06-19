// in the name of Allah
// https://codeforces.com/contest/1689/problem/A
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
	int n, m, k;
	string a, b;
	cin >> n >> m >> k >> a >> b;
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	int ac = 0, bc = 0, cx = 0, cy = 0;
	while (a[ac] != '\0' && b[bc] != '\0') { 
             if ((a[ac] < b[bc] && cx < k) || (cy >= k)) { 
		 cout << a[ac++]; 
		 cx++, cy = 0;
	     }
	     else {
		 cout << b[bc++]; 
		 cy++, cx = 0; 
	     }
	}
	cout << endl;
   }
}
