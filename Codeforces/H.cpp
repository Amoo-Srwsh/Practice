// in the name of Allah
// https://codeforces.com/problemset/problem/1635/B?f0a28=1
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
int32_t main()
{
	// You have to look for the best solution in your head :)
	sync;
	int tt; cin >> tt;
	while (tt--) {
		// ... MY solution
		int n, cnt=0; cin >> n;
		vector<int>v(n+1);
		for (int i=0; i<n; i++) cin >> v[i];
		for (int i=1; i<n-1; i++)
			if (v[i]>v[i-1]&&v[i]>v[i+1]) v[i+1]=max(v[i], v[i+2]), cnt++;
		cout << cnt << endl;
		for (int i=0; i<n; i++) cout << v[i] << " ";
		cout << endl;
	}
}
