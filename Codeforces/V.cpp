// in the name of Allah
// https://codeforces.com/contest/1144/problem/B
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
    int n, s = 0; cin >> n;
    vector<int> even, odd;
    for (int i = 0; i < n; i++) {
	 int x; cin >> x;
	 if (x & 1) odd.push_back(x);
	 else even.push_back(x);
	 s += x;
    }
    sort(even.begin(), even.end(), greater<int>());
    sort(odd.begin(), odd.end(), greater<int>());
    int MIN = min(even.size(), odd.size());
    s -= accumulate(even.begin(), even.begin() + MIN, 0);
    s -= accumulate(odd.begin(), odd.begin() + MIN, 0);
    if (MIN < even.size()) s -= even[MIN];
    if (MIN < odd.size()) s -= odd[MIN];
    cout << s;
}
