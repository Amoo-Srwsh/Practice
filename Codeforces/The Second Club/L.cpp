/* IN THE NAME OF ALLAH */



/* problem url */
// https://codeforces.com/problemset/problem/1728/B



#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
       
    int tst; cin >> tst; 
    while (tst--) {
	 int n; cin >> n; 
	 if (n % 3 == 1) {
             cout << "2 1 ";
	     for (int i = 3; i <= n; i++) {
		  cout << i << " ";
	     } 
	     cout << "\n";
	 }
	 if (n % 3 == 2) {
	     for (int i = 1; i <= n; i++) {
                  cout << i << " ";
	     }
	     cout << "\n";
	 }
	 if (n % 3 == 0) {
	     cout << "2 1 4 3 ";
	     for (int i = 5; i <= n; i++) {
		  cout << i << " ";
	     }
	     cout << "\n";
	 }
    }

    return 0 ;
}
