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
      vector<int> a(N + 1);
      int ok = 1;
      long long s = 0;
      for (int i = 1; i <= N; ++i) {
         cin >> a[i];
         s += (long long)a[i];
      }
      if(s >= 0)
         cout << "YES\n";
      else
         cout << "NO\n";
	}
	return 0;
}
//01100001 01101010 01100001 01111001 01011111 00110101 00110000 00111001 00110111
// for (int i = 0; i <)
