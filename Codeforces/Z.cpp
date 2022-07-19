// in the name of Allah
// https://codeforces.com/contest/1206/problem/B
#include<bits/stdc++.h>
using namespace std;
#define kill(x) return cout<<x<<'\n', 0;
#define sync ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0);
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC optimize("O0")
#pragma GCC optimize("O1") 
#define ll long long
vector<ll> A, B;
ll cntx, cnty, dump, n, ans;
inline ll res (void) {
    for (int i = 0; i < cntx; i++) ans += A[i] - 1;
    for (int i = 0; i < cnty; i++) ans += abs(B[i] + 1);
    return ans;
}
int main() {
    sync;
    cin >> n;
    for (int i = 0; i < n; i++) {
         int x; cin >> x;
	 if (x > 0) A.push_back(x);
	 if (x < 0) B.push_back(x);
    }
    sort(A.begin(), A.end());
    sort(B.rbegin(), B.rend());
    cntx = A.size(), cnty = B.size(), dump = n - (cntx + cnty);
    if (cnty & 1 && dump == 0) kill(2 + res());
    kill(dump + res());
}
