// in the name of Allah
// https://codeforces.com/problemset/problem/275/A
#include<bits/stdc++.h>
using namespace std;
#define kill(x) return cout<<x<<'\n', 0;
#define sync ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0);
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC optimize("O0")
#pragma GCC optimize("O1") 
#define ll long long
int A[5][5];
void sol () {
    // This logic can be done for large tables :)
    for (int i = 1; i < 4; i++)
         for (int j = 1; j < 4; j++)
              cin >> A[i][j];
    for (int i = 1; i < 4; i++) {
         for (int j = 1; j < 4; j++) {
              if ((A[i][j]+A[i-1][j]+A[i+1][j]+A[i][j-1]+A[i][j+1]) & 1) cout << "0";
              else cout << "1";
         }
         cout << endl;
    }
}
int main() {
    sync;
    int tt = 1; //cin >> tt;
    while (tt--) sol();
}
