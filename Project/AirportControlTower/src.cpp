// in the name of Allah
#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

map<string, int> status;
map<int, string> band;
inline bool display_status (string B, int c, int y) {
  int res = status[B];
  if (res > 1) {
      if (res == 2) {
	  cout << "YOU ARE TAKING OFF\n";
	  return 1;
      }
      if (res == 3) {
	  cout << "YOU ARE LANDING NOW\n";
	  return 1;
      }
  } 
  if (y - c <= 1) { 
      cout << "NO FREE BOUND\n";
      return 1;
  }
  return 0;
}
inline void plane_status (string B) {
  int res = status[B];
  if (res == 0) { cout << "4\n"; }
  else { cout << res << "\n"; }
  return ;
}
int main() {
  // i love you UFO7
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n, k, CC; cin >> n >> k;
  for (int i = 0; i < n; i++) {
       string AirPlaneID; 
       cin >> AirPlaneID;
       status[AirPlaneID] = 1;
  }
  cin >> CC;
  int c = 0, y = k + 1; // two points
  while (CC--) {
       string A, B; cin >> A;
       if (A == "TAKE-OFF") {
	   cin >> B;
	   if (status[B] == 0) { 
	       cout << "YOU ARE NOT HERE\n"; 
	       continue;
	   }
	   if (display_status(B, c, y)) continue;
	   status[B] = 2, band[++c] = B;
       }
       if (A == "LANDING") {
	   cin >> B;
	   if (status[B] == 1) { 
	       cout << "YOU ARE HERE\n"; 
	       continue; 
	   }
	   if (display_status(B, c, y)) continue;
	   status[B] = 3, band[--y] = B;
       }
       if (A == "PLANE-STATUS") { 
	   cin >> B;
           plane_status(B);
       }
       if (A == "BAND-STATUS") {
	   int bandn; cin >> bandn;
	   if (band[bandn]=="") { cout << "FREE\n"; }
	   else { cout << band[bandn] << "\n"; }
       }
  }
}
