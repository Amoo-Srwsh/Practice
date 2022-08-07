// in the name of Allah
// https://quera.org/problemset/23465/
#include<bits/stdc++.h>
using namespace std;
#define kill(x) return cout<<x<<'\n', 0;
#define sync ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0);
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC optimize("O0")
#pragma GCC optimize("O1") 
int main(int argc, char *argv[]) {
    sync;
    int n, m; cin >> n >> m;
    vector<pair<int, int>> A(m);
    for (int i = 0; i < m; i++) {
	 cin >> A[i].first >> A[i].second;
    }
    sort(A.begin(), A.end());
    int S = 0, ans = 0, maxn = 0;
    for (int i = 0; i < m; i++) {
	 if (A[i].first > maxn) {
             ans += (A[i].first - maxn);
	     S = A[i].first;
	 }
	 if (A[i].first > S && A[i].second > maxn) {
             ans++;
	     S = maxn + 1;
	 }
	 maxn = max(maxn, A[i].second);
    }
    cout << ans + (n - maxn);
    
    return EXIT_SUCCESS;
}
