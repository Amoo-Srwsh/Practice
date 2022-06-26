// in the name of Allah
// https://quera.org/problemset/3410/
#include<bits/stdc++.h>
using namespace std;
#define sync ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0);
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC optimize("O0")
#pragma GCC optimize("O1")
#define ll long long
int main() {
    /*Display Pascal Tringle*/
    sync;
    int n, Tx, Ty; cin >> n; 
    if (n == 1) cout << "1";
    else cout << "1\n1 1\n";
    vector<int> A(n*2, 1);
    for (int i = 2; i < n; i++) {
	 cout << "1 ";
	 for (int j = 0; j < i; j++) {
              Ty = A[j];
	      if (j != 0) cout << Tx << " ", A[j] = Tx;
	      Tx = Ty + A[j + 1];
	 }
	 cout << "1\n";
    }
}
