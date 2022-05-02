// in the name of Allah
// https://codeforces.com/problemset/problem/1546/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<pii, int> piii;
typedef pair<ll, ll> pll;
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define debug(x) cerr<<#x<<'='<<(x)<<endl;
#define debugp(x) cerr<<#x<<"= {"<<(x.first)<<", "<<(x.second)<<"}"<<endl;
#define debug2(x, y) cerr<<"{"<<#x<<", "<<#y<<"} = {"<<(x)<<", "<<(y)<<"}"<<endl;
#define debugv(v) {cerr<<#v<<" : ";for (auto x:v) cerr<<x<<' ';cerr<<endl;}
#define all(x) x.begin(), x.end()
#define pb push_back
#define SZ(x) ((int)x.size())
#define kill(x) return cout<<x<<'\n', 0;
#define getbit(x, y) (((x)>>(y))&1)
#define forn(i, n) for (int i = 0; i < int(n); i++)
int main()
{
	sync;
	int tt; cin >> tt;
	while (tt--) {
		int i=0, j=0;
		int n; cin >> n;
		vector<int>a(n), b(n), x1, y1, x2, y2;
		for (int &c:a) cin >> c;
		for (int &c:b) cin >> c;
		for (int c=0; c<n; c++) {
			if (a[c]>b[c]) i+=a[c]-b[c], x1.pb(a[c]-b[c]), y1.pb(c+1);
			if (b[c]>a[c]) j+=b[c]-a[c], x2.pb(b[c]-a[c]), y2.pb(c+1);
		}
		if (i!=j) { cout << "-1" << endl; continue; }
		int cnt1=0, cnt2=0;
		int m=max(x1.size(), x2.size());
		cout << i << endl;
		while (cnt1<m&&cnt2<m) {
			while (x1[cnt1]&&x2[cnt2]) {
			       	cout << y1[cnt1] << " " << y2[cnt2] << endl;
				x1[cnt1]--, x2[cnt2]--;
			}
			if (!x1[cnt1]) cnt1++;
			if (!x2[cnt2]) cnt2++;
		}
	}
}
