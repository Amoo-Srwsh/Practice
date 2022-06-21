// in the name of Allah
// https://codeforces.com/problemset/problem/1680/B
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
	int n, m;
	cin >> n >> m;
        vector<string> S(n);
	for (int i = 0; i < n; i++) cin >> S[i];
	int L = 0, F = 1;
	for (int i = 0; i < n; i++)
	     for (int j = 0; j < m; j++)
		  if (S[i][j] == 'R' && L == 0) L = j + 1;
	          else if (S[i][j] == 'R' && F) F = ((j + 1 < L)?0:1);
	cout << ((F)?"YES":"NO") << endl;
   }
}
