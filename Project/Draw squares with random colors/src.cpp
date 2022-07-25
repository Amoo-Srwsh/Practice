// in the name if Allah
#include<bits/stdc++.h>
using namespace std;
#define kill(x) return cout<<x<<'\n', 0;
#define sync ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0);
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC optimize("O0")
#pragma GCC optimize("O1") 
#define ll long long
int main (int argc, char *argv[]) { 
    sync;
    // UFO Motto (Who Want To Winner?)
    srand(time(0));
    int n; cin >> n;
    ofstream image;
    image.open(argv[1]);
    image << "P3\n500 500\n255\n";
    vector<int> A;
    int cnx = 1, cny = 1, c = 0, t = 0;
    for (int i = 1; i <= 500; i++, cnx++) {
	 for (int j = 1; j <= 500; j++, cny++) {
              if (cnx == 1 && cny == 1) {
                  A.push_back(rand()%255); 
		  A.push_back(rand()%255); 
		  A.push_back(rand()%255); 
	      }
	      if (cnx == n || cny == n) { image << "255 255 255\n"; } 
	      else { image << A[c] << " " << A[c + 1] << " " << A[c + 2] << endl; }
	      if (cny == n) cny = 0, c += 3;
	 }
	 if (cnx == n) cnx = 0, t = c - 3;
	 c = t;
    }
    image.close();
}
