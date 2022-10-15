/* IN THE NAME OF ALLAH */

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() { 
    int tst; cin >> tst;

    while (tst--) {
	  int n, c; 
	  cin >> n >> c;
	  vector<int> A(n + 1);
	  for (int i = 0; i < n; i++) {
	       cin >> A[i];
	  }
	  sort(A.rbegin(), A.rend());
	  int number_element = 1, ans = 0;
	  for (int i = 1; i <= n; i++) {
	       if (A[i - 1] == A[i]) {
		   number_element++;
		   continue ;
	       }
	       if (number_element >= c) {
		   ans += c;
	       }
	       else {
		   ans += number_element;
	       }
	       number_element = 1;
	  }
	  cout << ans << '\n';
    }

    return 0;
}
