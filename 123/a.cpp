#include<bits/stdc++.h>
using namespace std;
 
const int MAXN = 4e1 + 10;
long long n, fib[MAXN], ans;
 
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i < 3)
            fib[i] = 1;
        else
            fib[i] = fib[i - 1] + fib[i - 2];
        ans += fib[i];
    }
    cout << ans << '\n';
}