// in the name of Allah
// https://quera.org/problemset/15124/
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define sync ios_base::sync_with_stdio(false),cin.tie(0)
#define pb       push_back
#define mp       make_pair
#define all(x)   x.begin(), x.end()
#define cl       clear 
//vector<int>::iterator result = min_element(v.begin(), v.end());
//distance(v1.begin(), min_element(v1.begin(), v1.end()));
int a, b, x, c1, c2, ans;
int ar[1000][1000];
int32_t main()
{
	sync; 
	cin >> a >> b >> x;
	vector<int>v1(1000), v2(1000);
	for (int i=1; i<=max(a, b); i++) {
		if (a%i==0) v1[c1++]=i;
		if (b%i==0) v2[c2++]=i;
	}
	for (int i=0; i<c1; i++)
		for (int j=0; j<c2; j++)
			if (v1[i]+v2[j]<=x&&!ar[v1[i]-1][v2[j]-1]) ans++, ar[v1[i]-1][v2[j]-1]=1;
	for (int i=0; i<c2; i++) 
		for (int j=0; j<c1; j++)
			if (v1[j]+v2[i]<=x&&!ar[v1[j]-1][v2[i]-1]) ans++, ar[v1[j]-1][v2[i]-1]=1;
	cout << ans;
}
