// in the name of Allah
// https://quera.ir/problemset/3818/
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define sync ios_base::sync_with_stdio(false),cin.tie(0)
#define pb       push_back
#define mp       make_pair
#define all(x)   x.begin(), x.end()
#define cl       clear
int n, m, l, x, y, ans;
string s;
int32_t main()
{
	sync; 
	cin >> n >> m >> l >> x >> y >> s, x--, y--;
	vector<string>v(n);
	for (int i=0; i<n; i++) cin >> v[i];
	for (int i=0; i<l; i++) {
        	if (s[i]=='U') {
			for (; x>=0&&v[x][y]!='O'; x--) if (v[x][y]=='#') ans++, v[x][y]='.';
			if (x<0||v[x][y]=='O') x++;
		}
		else if (s[i]=='D') {
			for (; x<n&&v[x][y]!='O'; x++) if (v[x][y]=='#') ans++, v[x][y]='.';
			if (x>=n||v[x][y]=='O') x--;
		}
               	else if (s[i]=='R') {
			for (; y<m&&v[x][y]!='O'; y++) if (v[x][y]=='#') ans++, v[x][y]='.';
			if (y>=m||v[x][y]=='O') y--;
		}
               	else if (s[i]=='L') {
			for (; y>=0&&v[x][y]!='O'; y--) if (v[x][y]=='#') ans++, v[x][y]='.';
			if (y<0||v[x][y]=='O') y++;
		}
	}
	cout << ans;
}
