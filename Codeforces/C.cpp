// in the name of Allah
// https://codeforces.com/contest/1547/problem/B
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
string s;
int sol()
{
	// my solution
	cin>>s;
	map<char, int>cnt;
	for (int i=0; i<s.length(); i++) {
		if (!cnt[s[i]]) cnt[s[i]]=i+1;
		else kill("NO");
	}
	for (int i=0; i<s.length(); i++) {
		int res=abs(cnt['a'+i]-cnt['a'+i+1]);
		if ((res!=1&&res!=i+1)||(!cnt['a'+i])) kill("NO");
	}
	kill("YES");
}
int main()
{
	int tt; cin>>tt;
	while (tt--) sol();
}
