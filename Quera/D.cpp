// in the name of Allah
// https://quera.org/problemset/6374/
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define sync ios_base::sync_with_stdio(false),cin.tie(0)
#define pb       push_back
#define mp       make_pair
#define all(x)   x.begin(), x.end()
#define cl       clear
int length;
int func(string s)
{
	for (int i=0; s[i]!='\0'; i++)
		if (s[i]!='F')
			return 0;
	cout << 1;
	for (int i=0; s[i]!='\0'; i++)
		cout << 0;
	return 1;
}
int32_t main()
{
	string s; cin >> s;
	length=s.length()-1;
	if (func(s)==1)
		return 1;
	do {
		switch (s[length]) {
			case 'F':
				s[length]='0';
				break;
			case '9':
				s[length]='A';
				break;
			default:
				s[length]++;
		}
	} while (s[length]=='0'&&--length>=0);
	for (int i=0; s[i]!='\0'; i++)
		cout << s[i];
}
