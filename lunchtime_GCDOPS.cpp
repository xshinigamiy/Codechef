#include <bits/stdc++.h>
using namespace std;
const long long INF = 1e18;
const int MAXN = (int)1e6 + 6;
// #define int long long
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
int T;
int main() {
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
	#endif
	cin >> T;
	while(T--) {
      int N;
      cin >> N;
      int b[N + 1];
      // vector<int> a()
      for (int i = 1; i <= N; ++i) {
         cin >> b[i];
      }
      int ok = 1;
      for (int i = 1; i <= N; ++i) {
         if(i == b[i])
            continue;
         int g = __gcd(i, b[i]);
         // if(g == 1 && b[i] > 1)
         //    ok = 0;
         if(b[i] > g)
            ok = 0;
         // cout << imie(g) << "\n";
         // if(b[g] == g && g != 1)
         //    continue;
         // else
         //    ok = 0;
      }
      if(ok)
         cout << "YES\n";
      else
         cout << "NO\n";
	}
	return 0;
}
//01100001 01101010 01100001 01111001 01011111 00110101 00110000 00111001 00110111
// for (int i = 0; i <)
