// in the name of Allah
// https://codeforces.com/contest/1243/problem/A
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
const int inf=1000000010;
const ll INF=1000000000000001000LL;
const int mod=1000000007; 
const int MAXN=300010, LOG=20;
int main()
{
	int tt; cin >> tt;
	while (tt--) {
		// ... UP solve :)
		int n, ans=0; cin >> n; 
		vector<int>v(n);
		for (int &i:v) cin >> i;
		sort(v.begin(), v.end(), greater<int>());
		for (int i=n-1; i>=0; i--) if (v[i]>=i+1) ans=max(ans, i+1);
		cout << ans << endl;
	}
}
