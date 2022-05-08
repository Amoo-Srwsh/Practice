// in the name of Allah
// https://quera.org/problemset/3031/
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
int32_t main()
{
	// You have to look for the best solution in your head :)
	// MY solution!
	ll n, k; cin >> n >> k;
	vector<pair<ll,ll>>a(n);
	for (ll i=0; i<n; i++) cin >> a[i].first >> a[i].second;
	sort(all(a));
	for (ll i=0; i<n; i++) {
		if (a[i].first<a[i].second&&k>=a[i].first) k+=(a[i].second-a[i].first);
		if (k<a[i].first) break;
	}
	cout << k << endl;
}
