//https://quera.org/problemset/3416/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define endl '\n'
string s;
int i;
void decode(char c) // convert ascii number to intiger function
{
	int ans=0;
	stringstream str;
	while (isdigit(s[i])&&s[i]!='\0') {
		str << s[i];
		i++;
	}
	str >> ans;
	ans-=1;
	while (ans--)
		cout << c;
}
int main()
{
	sync;
	int t; cin >> t;
	while (t--) {
		int key; cin >> key;
		cin >> s;
		if (key==1) {
			int cnt=1;
			for (int i=1; i<=s.length(); i++) {
				if (s[i]==s[i-1])
					cnt++;
				else {
					cout << s[i-1];
					if (cnt>1)
						cout << cnt;
					cnt=1;
				}
			}
			cout << endl;
		}
		else {
			char tmp;
			for (i=0; i<s.length(); i++) {
				if (isdigit(s[i]))
					decode(tmp);
				tmp=s[i];
				if (isalpha(tmp))
					cout << tmp;
			}
			cout << endl;
		}
	}
}
