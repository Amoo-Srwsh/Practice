// in the name of Allah
// https://codeforces.com/contest/1690/problem/B
#include <bits/stdc++.h>
using namespace std;
#define sync ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0);
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC optimize("O0")
#pragma GCC optimize("O1")
const int inf = 1e9 + 7;
 
bool equals(vector<int>&a, vector<int>&b, int n){
    int dif = inf;
    for (int i = 0; i < n; i++) 
	 if(b[i] != 0) dif = min(dif, a[i] - b[i]);
    if(dif < 0) return false;
    for (int i = 0; i < n; i++) 
	 if(b[i] != 0 && a[i] - b[i] != dif || a[i] - b[i] > dif) return false;
    return true;
}
 
void solve(){
    int n;
    cin >> n;
    vector<int>a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    cout << (equals(a, b, n) ? "YES\n" : "NO\n");
 
}
 
int main() {
    sync;
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
