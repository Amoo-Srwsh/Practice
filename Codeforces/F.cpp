// in the name of Allah
// https://codeforces.com/problemset/problem/1649/A
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
const int inf=1000000010;
const ll INF=1000000000000001000LL;
const int mod=1000000007; 
int sol()
{
	// ... UP solve
	int a=0, b=0;
	int n; cin >> n;
	vector<int>v(n);
	for (int &i:v) cin >> i;
	for (int i=0; i<n; i++) {
		if (!v[i]&&!a) a=b;
		if (!v[i]) b=0;
		else b++;
	}
	if (a+b>=n) kill(0);
	kill(n-(a+b)+1);
}
int main()
{
	sync;
	int tt; cin >> tt;
	while (tt--) sol();
}
