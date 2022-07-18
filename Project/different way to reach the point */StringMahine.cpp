// in the name of Allah
// first read the question on this page
// https://quera.org/problemset/66872/
#include<bits/stdc++.h>
using namespace std;
#define kill(x) return cout<<x<<'\n', 0;
#define sync ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0);
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC optimize("O0")
#pragma GCC optimize("O1") 
inline int copy (string &s, string b, int n) {
    int c = 0;
    while (n--) for (int i = 0; b[i] != '\0'; i++) s[c++] = b[i];
    return 0;
}
inline int cntsubstr (string s, string b) {
    int lx = s.length(), ly = b.length(), cnt = 0;
    for (int i = 0; i <= lx - ly; i++) {
	 int F = 1;
	 for (int j = i, k = 0; k < ly && F; k++, j++) 
              if (s[j] != b[k]) F = 0;
	 cnt += F;
    }
    return cnt;
}
int main() {
    sync;
    int res = 0, dummy = 0;
    string s; cin >> s;
    while (1) {
	 string goal; cin >> goal;
	 if (goal == "copy") {
	     string b;
	     int n; cin >> b >> n;
	     copy(s, b, n);
	 }
	 else if (goal == "substr") {
             string b;
             int n; cin >> b >> n;
             res += (n == cntsubstr(s, b));
         }
	 else if (goal == "attach") {
	     string b, c;
	     int n;
	     cin >> b >> n >> c, b += c;
	     res += (n == cntsubstr(s, b));
	 }
	 else if (goal == "compare") {
	     string b; cin >> b;
	     res += (s == b);
	 }
	 else if (goal == "length") {
	     int n; cin >> n;
	     res += (n == s.length());
	 }
	 else { cin >> goal >> goal >> goal >> goal; break; }
	 dummy++;
    }
    cout << ((res >= dummy / 2)?"Eyval":"HeifShod");
}
