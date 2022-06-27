// in the name of Allah
// https://codeforces.com/contest/1028/problem/A
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
    int r, c;
    cin >> r >> c;
    vector<string> S(r);
    vector<int>cx, cy;
    for (int i = 0; i < r; i++) cin >> S[i];
    int Fx = 1, Fy = 1;
    for (int i = 0; i < r; i++) {
	 for (int j = 0; j < c; j++) {
	      if (S[i][j] == 'B' && Fx) cx.push_back(j + 1);
              if (S[i][j] == 'B' && Fy) cy.push_back(i + 1), Fy = 0;
	 }
	 if (cx.size()) Fx = 0;
	 Fy = 1;
    }
    cout << cy[cy.size()/2] << " " << cx[cx.size()/2];
}
