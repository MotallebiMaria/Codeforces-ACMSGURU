#include <bits/stdc++.h>
using namespace std;
 
int n, k;
 
int fac(int x) {
    int out = 1;
    for (int i = 2; i <= x; i++)
        out *= i;
    return out;
}
 
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n >> k;
    long long ans = 0;
    if (k <= n)
        ans = fac(n) / (fac(k) * fac(n - k)) * fac(n) / (fac(k) * fac(n - k)) * fac(k);
    cout << ans << '\n';
    return 0;
}