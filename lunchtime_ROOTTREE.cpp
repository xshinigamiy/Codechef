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
      vector<int> ind(N + 5);
      for (int &x: ind)
         x = 0;
      int ans = 0;
      for (int i = 0; i < N  - 1; ++i) {
         int u, v;
         cin >> u >> v;
         ++ind[v];
         // if()
      }
      for(int i = 0; i <= N; ++i){
         // if()
         if(ind[i] > 0)
            ans += ind[i] - 1;
      }

      cout << ans << '\n';
	}
	return 0;
}
//01100001 01101010 01100001 01111001 01011111 00110101 00110000 00111001 00110111
// for (int i = 0; i <)
