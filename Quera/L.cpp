// in the name of Allah
// https://quera.org/problemset/62451/
#include<bits/stdc++.h>
using namespace std;
#define sync ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0);
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC optimize("O0")
#pragma GCC optimize("O1")

int MAXN = 1e4 + 5;

int main() {
   sync;
   int a, b, c, d;
   cin >> a >> b >> c >> d;
   int t = MAXN, xt = 0, yt = 0;
   while (1) {
	int res = abs(a - c);
	if (a > c) xt = 1;
	else yt = 1;
	if (res == t) { 
            cout << "WAIT WAIT";
	    return 1;
	}
	if (xt + yt == 2) { 
            cout << "SEE YOU";
	    return 1;
	}
	if (res > t) {
            cout << "BORO BORO";
	    return 1;
	}
	a += b, c += d, t = res;
   }
}
