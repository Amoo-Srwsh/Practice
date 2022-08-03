// in the name of Allah
#include<bits/stdc++.h>
using namespace std;
#define kill(x) return cout<<x<<'\n', 0;
#define sync ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0);
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC optimize("O0")
#pragma GCC optimize("O1") 
#define ll long long
int INF = 100 + 5, n;
int main(int argc, char *argv[]) {
    // Can You Say UFO7?
    sync;
    ofstream res;
    res.open(argv[1]);
    cin >> n;
    int A[n + 1][2];
    for (int i = 0; i < n; i++) 
	 cin >> A[i][0] >> A[i][1];
    A[n][0] = A[n][1] = 0;
    vector<int> advice;
    for (int i = 0; i <= n; i++) {
	 int x = A[i][0], y = A[i][1];
	 if (x * y <= x * INF) { 
             if (!advice.empty()) {
		 res << "Buy " << advice[0] << " coins with the amount of " << advice[0]*INF
                      << " and use them on days: "; 
		 int len = advice.size(); 
		 for (int i = 1; i < len; i++) { 
	              res << "(" << advice[i] << ")"; 
		      if (i < len - 1) res << " , "; 
		 } 
		 if (i != n) 
	             res << "\n\n";
		 advice.clear();
	     }
             INF = y; 
	     advice.push_back(x);
	 }
	 else { 
	     advice[0] += x; 
	 }
	 advice.push_back(i + 1); 
    }
    res.close();

    return EXIT_SUCCESS;
}
