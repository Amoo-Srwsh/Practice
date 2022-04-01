//https://quera.org/problemset/6193/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define endl '\n'
int32_t main()
{
	sync;
	string s; cin >> s;
	map<char, int>x;
	for (char c : s) x[tolower(c)]++;
	for (char c : s) {
		char y=(((x[tolower(c)]*((tolower(c))-'a'))+1)%26)+((islower(c))?97:65);
		cout << (char)y;
	}
}
