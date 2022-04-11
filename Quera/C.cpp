// in the name of Allah
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define sync ios_base::sync_with_stdio(false),cin.tie(0)
#define pb       push_back
#define mp       make_pair
#define all(x)   x.begin(), x.end()
#define cl       clear
inline bool check(string s, int len)
{
	for (int i=0; i<len-1; i++) 
		if (s[i]<s[i+1])
			return false;
	return true;
}
int32_t main()
{	
	sync; 
	/* Digikala Super Cup */
	int n; cin >> n;
	while (n--) {
		string s, t1, t2=""; cin >> s, t1=s;
		int len=s.length();
		if (len==1||check(s, len)) {
			cout << "no answer" << endl;
			continue; 
		}
		map<char, int>cnt;
		int ar[len];
		sort(s.begin(), s.end());
		for (int i=0; i<len; i++) cnt[s[i]]=i;
		for (int i=0; i<len; i++) ar[i]=cnt[t1[i]];
		do {
			int i=0, c=0, m=1e3;
			for (i=len-2; i>=0; i--)
				if (ar[i]<ar[i+1]) break;
			for (int j=len-1; j>i; j--)
				if (ar[j]>ar[i]&&m>ar[j]) m=ar[j], c=j;
			swap(ar[i], ar[c]);
			sort((ar+(i+1)), (ar+len));
			for (int j=0; j<len; j++) t2+=s[ar[j]];
		} while (t1==t2);
		cout << t2 << endl;
	}
}
