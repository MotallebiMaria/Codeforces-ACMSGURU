#include <bits/stdc++.h>
using namespace std;
 
const int N = 3e1 + 10;
int k;
long long dp[N];
 
int main() {
	cin >> k;
    for (int i = 0; i <= k * 2; i += 2) {
        if (i <= 2) {
            dp[i] = 1;
            continue;
        }
        for (int j = 2; j <= i; j += 2) {
            dp[i] += dp[i - j] * dp[j - 2];
        }
    }
    cout << dp[k * 2] << ' ' << k + 1 << endl;
    return 0;
}