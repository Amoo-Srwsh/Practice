// in the name of Allah
// https://quera.org/problemset/147637/
#include<bits/stdc++.h>
using namespace std;
#define kill(x) return cout<<x<<'\n', 0;
#define sync ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0);
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC optimize("O0")
#pragma GCC optimize("O1") 

inline int sol(int x, int y) {
    int res = 0, i = 0;
    while (i <= y) {
	 if (i == 0) {
	     i = x;
	     res++;
	     continue;
	 }
	 i += x * 2 - 1;
	 if (i <= y) res++;
    } 

    return res;
}
int main() {
    sync;
    int tt; cin >> tt;
    while (tt--) {
         int n, m, a, b;
	 cin >> n >> m >> a >> b;
	 cout << sol(a, n) * sol(b, m) << endl;
    }
}
