// in the name of Allah
// https://codeforces.com/problemset/problem/1692/C
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
	vector<string> S(8);
	for (int i = 0; i < 8; i++) 
	     cin >> S[i];
	int r = 0, c = 0, cnX = 0, cnY = 0, F = 0;
        for (int i = 0; i < 8 && !F; i++, cnX = 0) {
             for (int j = 0; j < 8; j++)
		  if (S[i][j] == '#') r = i + 1, c = j + 1, cnX++;
	     if (cnX == 1 && cnY == 2) F = 1;
	     cnY = cnX;
	}
        cout << r << " " << c << endl;
   }
}
