// in the name of Allah
// https://codeforces.com/problemset/problem/1638/A
#include <bits/stdc++.h>
using namespace std;
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
	sync;
	int TC; cin >> TC;
	while (TC--) {
		// ... MY solution
		int n, res=0; cin >> n;
		vector<int>p(n);
		for (int i=0; i<n; i++) cin >> p[i];
		for (int i=0; i<n; i++) {
			if (res==0&&i+1!=p[i]) res=i+1;
			if (p[i]==res) for (int j=i, c=res-1; c<j; c++, j--) swap(p[c], p[j]);
		}
		for (int i=0; i<n; i++) cout << p[i] << " ";
		cout << endl;
	}
	//---second solution---//
	/*
	int tt;
  	cin >> tt;
  	while (tt--) {
    		int n;
    		cin >> n;
    		vector<int> p(n);
    		for (int i = 0; i < n; i++) {
      			cin >> p[i];
    		}
    		int j = 0;
    		while (j < n && p[j] == j + 1) {
      			++j;
    		}
    		if (j < n) {
      			reverse(p.begin() + j, min_element(p.begin() + j, p.end()) + 1);
    		}
    		for (int i = 0; i < n; i++) {
      			cout << p[i] << " \n"[i == n - 1];
    		}
	}
	*/
}
