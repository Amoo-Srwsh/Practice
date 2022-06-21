// in the name of Allah
// https://codeforces.com/contest/1646/problem/B
#include<bits/stdc++.h>
using namespace std;
#define sync ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0);
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC optimize("O0")
#pragma GCC optimize("O1")

#define ll long long

int main() {
   sync;
   int TC; cin >> TC;
   while (TC--) {
	int n; cin >> n;
	vector<ll> A(n);
	for (int i = 0; i < n; i++) cin >> A[i];
	sort(A.begin(), A.end());
	ll F = 1, R = A[n - 1], B = A[0];
	ll i = 0, j = n - 1;
	while (R <= B || i <= (n - 1) - j) {
             if (R <= B) R += A[--j];
	     if (i <= (n - 1) - j) B += A[++i];
	     if (i >= j) {
		 F = 0;
		 break;
	     }
	}
	cout << ((F)?"YES":"NO") << endl;
   }

   // second solution
   /*
   int t; cin >> t;
   for (int test_number = 0; test_number < t; test_number++) {
        int n; cin >> n; 
	vector <long long> a(n); 
	for(int i = 0; i < n; i++) cin >> a[i]; 
	sort(a.begin(), a.end()); 
	vector <long long> prefix_sums = {0};
	for(int i = 0; i < n; i++) prefix_sums.push_back(prefix_sums.back() + a[i]); 
	vector <long long> suffix_sums = {0}; 
	for(int i = n - 1; i >= 0; i--) suffix_sums.push_back(suffix_sums.back() + a[i]); 
	bool answer = false; 
	for(int k = 1; k <= n; k++) {
	    if(2 * k + 1 <= n) {
	       long long blue_sum = prefix_sums[k + 1]; 
	       long long red_sum = suffix_sums[k]; 
	       if(blue_sum < red_sum) answer = true;
	    }
	    if(answer) cout << "YES\n"; 
	    else cout << "NO\n";
	}
	return 0;
    */
}
