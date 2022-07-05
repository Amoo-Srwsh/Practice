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
    int cx = even.size(), cy = odd.size();
    int EorO = (cx > cy);
    int i = 0, j = 0, cnt = min(cx, cy)*2 + (cx != cy);  // tomorow make loop counter with out cnt varible
    while (cnt--) {
	  if (EorO) s -= even[i++];
	  else s -= odd[j++];
	  EorO = !EorO;
    }
    cout << s;
}
