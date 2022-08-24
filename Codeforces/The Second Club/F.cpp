/* IN THE NAME OF ALLAH */



/* problem url */
// https://codeforces.com/problemset/problem/1515/A



#include <bits/stdc++.h>

#define LOG(FMT...) fprintf(stderr, FMT)

using namespace std;

typedef long long ll;
typedef unsigned long long ull;


template <class T>
istream& operator>>(istream& is, vector<T>& v) {
  for (T& x : v)
    is >> x;
  return is;
}

template <class T>
ostream& operator<<(ostream& os, const vector<T>& v) {
  if (!v.empty()) {
    os << v.front();
    for (int i = 1; i < v.size(); ++i)
      os << ' ' << v[i];
  }
  return os;
}

int main() {
#ifdef ELEGIA
    freopen("test.in", "r", stdin);
    int nol_cl = clock();
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
         int n, x; cin >> n >> x; 
	 vector<int> w(n); cin >> w; 
	 if (accumulate(w.begin(), w.end(), 0) == x) { 
	     cout << "NO\n"; 
	     continue;
         } 
	 for (int i = 0; i != n; ++i) {
              x -= w[i]; 
	      if (x == 0) {
                  swap(w[i], w[i + 1]);
                  break;
              }
          }
         cout << "YES\n" << w << '\n';
     }

#ifdef ELEGIA
     LOG("Time: %dms\n", int ((clock() 
			 -nol_cl) / (double)CLOCKS_PER_SEC * 1000));
#endif

     return 0 ;
}
