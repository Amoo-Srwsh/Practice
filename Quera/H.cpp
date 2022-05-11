// in the name of Allah
// https://quera.org/problemset/3415/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
inline ll Pow(ll a, ll b)
{
	ll ans = 1LL;
	while(b){
		if(b&1)ans *= a;
		b >>= 1;a *= a;
	}
	return ans;
}
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
#define vget(x) for (int &i:x) cin >> i
int ans, n;
int32_t main()
{
	// You have to look for the best solution in your head :)
	// MY solution!
	cin >> n, ans=n;
	vector<pair<int, int>>v(n);
	for (int i=0; i<n; i++) cin >> v[i].first >> v[i].second;
	sort(all(v));
	for (int i=0; i<n; i++) {
		for (int j=i+1; j<n&&v[i].first; j++) {
			if (v[i].second>=v[j].second&&v[j].first) ans--, v[j].first=0;
			if (v[i].first==v[j].first) ans--, v[i].first=0;
		}
	}
	cout << ans;
}
// thanks God
