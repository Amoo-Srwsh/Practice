// in the name of Allah
// https://codeforces.com/problemset/problem/1150/B
#include<bits/stdc++.h>
using namespace std;
#define kill(x) return cout<<x<<'\n', 0;
#define sync ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0);
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC optimize("O0")
#pragma GCC optimize("O1") 
#define ll long long
bool chk (vector<string> S, int i, int j)
{ return (S[i][j+1]=='.' && S[i][j+2]=='.' && S[i-1][j+1]=='.' && S[i+1][j+1]=='.'); }
int sol () {
    int n; cin >> n;
    vector<string> S(n+1);
    int A = 0, B = 0;
    for (int i = 0; i < n; i++) {
	 cin >> S[i];
	 for (int j = 0; j < n; j++) A += (S[i][j] == '.');
    }
    if (A % 5) kill("NO");
    for (int i = 1; i < n; i++) {
	 for (int j = 0; j < n; j++) {
	      if (S[i][j]=='.' && chk(S, i, j)) {
	          S[i][j] = S[i][j+1] = S[i][j+2] = S[i-1][j+1] = S[i+1][j+1] = '#';
		  B += 5, j += 2;
	      }
	 }
    }
    if (B == A) { kill("YES"); }
    else { kill("NO"); }
}
int main() {
    sync;
    int tt = 1; //cin >> tt;
    while (tt--) sol();
}
