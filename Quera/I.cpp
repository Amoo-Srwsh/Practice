// in the name of Allah
// https://quera.org/problemset/20258/
#include <bits/stdc++.h>
using namespace std;
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define debug(x) cerr<<#x<<'='<<(x)<<endl;
#define debugp(x) cerr<<#x<<"= {"<<(x.first)<<", "<<(x.second)<<"}"<<endl;
#define debug2(x, y) cerr<<"{"<<#x<<", "<<#y<<"} = {"<<(x)<<", "<<(y)<<"}"<<endl;
#define debugv(v) {cerr<<#v<<" : ";for (auto x:v) cerr<<x<<' ';cerr<<endl;}
#define all(x) x.begin(), x.end()
#define pb push_back
#define fs first
#define sc second
#define SZ(x) ((int)x.size())
#define kill(x) return cout<<x<<'\n', 0;
#define getbit(x, y) (((x)>>(y))&1)
int32_t main()
{
	sync;
	// ... MY solution
	int n, k, f=1, t=1, i=0; cin >> n >> k;
	vector<pair<int, int>>v(n);
	map<int, int>cnt;
	for (int i=0; i<n; i++) cin >> v[i].fs >> v[i].sc, cnt[v[i].fs]++;
	sort(all(v));
	while (i<n&&f) {
		if (t>v[i].sc) f=0;
		t=v[i].fs+1;
		if (cnt[v[i].fs]<=k) i+=cnt[v[i].fs];
		else i+=k, cnt[v[i].fs]-=k;
	}
	cout << ((f)?"YES":"NO");
}
