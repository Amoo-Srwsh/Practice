// in the name of Allah
// https://codeforces.com/problemset/problem/1692/B
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
	int x; cin >> x;
	vector<int>A(x);
	for (int i = 0; i < x; i++) cin >> A[i];
	sort(A.begin(), A.end());
	int dif = 1, len = x;
	for (int i = 1; i < x; i++) if (A[i]!=A[i-1]) dif++;
	if ((len%2==0&&dif%2==0)||(len%2!=0&&dif%2!=0)) cout << dif << endl;
	else cout << dif - 1 << endl;
   }
}
