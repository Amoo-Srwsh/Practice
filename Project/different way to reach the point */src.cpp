// in the name of Allah
#include<bits/stdc++.h>
using namespace std;
#define sync ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0);
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC optimize("O0")
#pragma GCC optimize("O1")
#define FORN(a, c, s) for (int i = 0; i < a; i++) s += c;
int n, m;
void make_map(vector<string>S, string res, int ur, int uc) {
    for (int i = 0; res[i] != '\0'; i++) {
	 switch (res[i]) {
                case 'U': ur--;
                    break;
                case 'D': ur++;
                    break;
                case 'L': uc--;
                    break;
                case 'R': uc++;
	            break;
         }
	 S[ur][uc] = '.';
    }
    for (int i = 0; i < n; i++) cout << S[i] << endl;
}
int main() {
    sync;
    int R, ur, uc, tr, tc; cin >> n >> m >> R;
    vector<string> S(n);
    for (int i = 0; i < n; i++) cin >> S[i];
    for (int i = 0; i < n; i++) {
	 for (int j = 0; j < m; j++) {
	      if (S[i][j] == '*') tr = i, tc = j;
	      if (S[i][j] == '^') ur = i, uc = j;
	 }
    }
    string res;
    if (tr - ur < 0) {FORN(ur - tr, "U", res);}
    else {FORN(tr - ur, "D", res);}
    if (tc - uc > 0) {FORN(tc - uc, "R", res);}
    else {FORN(uc - tc, "L", res);}
    map<string, bool> g;
    cout << endl;
    while (R) {
          next_permutation(res.begin(), res.end()); 
	  if (g[res] == 0) {
             make_map(S, res, ur, uc), R--, g[res] = 1;
             cout << endl;
	  }
    }
}
